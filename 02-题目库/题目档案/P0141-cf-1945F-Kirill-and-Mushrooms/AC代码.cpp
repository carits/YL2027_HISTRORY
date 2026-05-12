#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<ll> v(n + 1);
        for (int i = 1; i <= n; i++) cin >> v[i];
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) cin >> p[i];
        priority_queue<ll, vector<ll>, greater<ll>> q;
        ll best = 0;
        int bestk = 1;
        for (int k = n; k >= 1; k--) {
            q.push(v[p[k]]);
            while ((int)q.size() > k) q.pop();
            if ((int)q.size() == k) {
                ll cur = q.top() * 1LL * k;
                if (cur >= best) best = cur, bestk = k;
            }
        }
        cout << best << ' ' << bestk << '\n';
    }
    return 0;
}
