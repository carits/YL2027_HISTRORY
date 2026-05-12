#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    ll x, y;
    cin >> n >> m >> x >> y;
    queue<pair<ll, int>> q[2];
    for (int i = 0; i < n; i++) {
        ll t;
        int h;
        cin >> t >> h;
        q[0].push({t, h});
    }
    for (int i = 0; i < m; i++) {
        ll t;
        int h;
        cin >> t >> h;
        q[1].push({t, h});
    }

    ll now = 0, cycle = x + y;
    while (!q[0].empty() || !q[1].empty()) {
        ll r = now % cycle;
        int side;
        ll end;
        if (r < x) {
            side = 0;
            end = now + (x - r);
        } else {
            side = 1;
            end = now + (cycle - r);
        }
        if (q[side].empty()) {
            now = end;
            continue;
        }
        auto [t, h] = q[side].front();
        ll rem = end - now;
        if (h == 1 || t <= rem) {
            q[side].pop();
            now += t;
        } else {
            now = end;
        }
    }
    cout << now << '\n';
    return 0;
}
