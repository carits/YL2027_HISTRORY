#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

vector<int64> factor(int64 x) {
    vector<int64> p;
    for (int64 d = 2; d * d <= x; d += (d == 2 ? 1 : 2)) {
        if (x % d == 0) {
            p.push_back(d);
            while (x % d == 0) x /= d;
        }
    }
    if (x > 1) p.push_back(x);
    return p;
}

long long count_coprime(long long n, const vector<long long> &p) {
    if (n <= 0) return 0;
    long long ans = n;
    function<void(int, __int128, int)> dfs = [&](int pos, __int128 prod, int parity) {
        for (int i = pos; i < (int)p.size(); i++) {
            __int128 np = prod * p[i];
            if (np > n) continue;
            long long term = n / (long long)np;
            if (parity == 0) ans -= term;
            else ans += term;
            dfs(i + 1, np, parity ^ 1);
        }
    };
    dfs(0, 1, 0);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long x, y;
        cin >> x >> y;
        vector<long long> p = factor(x), q = factor(y);
        p.insert(p.end(), q.begin(), q.end());
        sort(p.begin(), p.end());
        p.erase(unique(p.begin(), p.end()), p.end());
        long long l = x + 1, r = y - 1;
        if (count_coprime(r, p) - count_coprime(l - 1, p) == 0) {
            cout << -1 << '\n';
            continue;
        }
        long long lo = l, hi = r;
        while (lo < hi) {
            long long mid = (lo + hi) >> 1;
            if (count_coprime(mid, p) - count_coprime(l - 1, p) > 0) hi = mid;
            else lo = mid + 1;
        }
        cout << lo << '\n';
    }
    return 0;
}
