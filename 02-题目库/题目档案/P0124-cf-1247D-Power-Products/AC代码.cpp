#include <bits/stdc++.h>
using namespace std;

string enc(const vector<pair<int,int>> &v) {
    string s;
    for (auto [p, e] : v) s += to_string(p) + "^" + to_string(e) + "#";
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    const int V = 100000;
    vector<int> spf(V + 1);
    for (int i = 2; i <= V; i++) if (!spf[i]) {
        for (int j = i; j <= V; j += i) if (!spf[j]) spf[j] = i;
    }
    map<string, long long> cnt;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vector<pair<int,int>> key, comp;
        while (x > 1) {
            int p = spf[x], c = 0;
            while (x % p == 0) x /= p, c++;
            c %= k;
            if (c) {
                key.push_back({p, c});
                comp.push_back({p, k - c});
            }
        }
        string a = enc(key), b = enc(comp);
        ans += cnt[b];
        cnt[a]++;
    }
    cout << ans << '\n';
    return 0;
}
