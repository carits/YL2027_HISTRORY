#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<int, ll> score(vector<int> a, int h) {
    sort(a.begin(), a.end());
    int solved = 0;
    ll cur = 0, penalty = 0;
    for (int x : a) {
        if (cur + x > h) break;
        cur += x;
        penalty += cur;
        solved++;
    }
    return {solved, penalty};
}

bool better(pair<int, ll> x, pair<int, ll> y) {
    if (x.first != y.first) return x.first > y.first;
    return x.second < y.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m, h;
        cin >> n >> m >> h;
        vector<pair<int, ll>> sc(n);
        for (int i = 0; i < n; i++) {
            vector<int> a(m);
            for (int &x : a) cin >> x;
            sc[i] = score(a, h);
        }
        int rank = 1;
        for (int i = 1; i < n; i++) {
            if (better(sc[i], sc[0])) rank++;
        }
        cout << rank << '\n';
    }
    return 0;
}
