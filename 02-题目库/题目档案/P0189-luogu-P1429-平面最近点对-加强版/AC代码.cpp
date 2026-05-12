#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct Point {
    ll x, y;
};

ll dist2(const Point &a, const Point &b) {
    ll dx = a.x - b.x;
    ll dy = a.y - b.y;
    return dx * dx + dy * dy;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Point> p(n);
    for (auto &pt : p) cin >> pt.x >> pt.y;

    sort(p.begin(), p.end(), [](const Point &a, const Point &b) {
        if (a.x != b.x) return a.x < b.x;
        return a.y < b.y;
    });

    for (int i = 1; i < n; i++) {
        if (p[i].x == p[i - 1].x && p[i].y == p[i - 1].y) {
            cout << fixed << setprecision(4) << 0.0 << '\n';
            return 0;
        }
    }

    long long best = LLONG_MAX;
    set<pair<ll, int>> by_y;
    int left = 0;

    for (int i = 0; i < n; i++) {
        while (left < i && best != LLONG_MAX) {
            ll dx = p[i].x - p[left].x;
            if (dx * dx <= best) break;
            by_y.erase({p[left].y, left});
            left++;
        }

        ll d = (best == LLONG_MAX ? 4000000000LL : (ll)sqrt((long double)best) + 2);
        auto it1 = by_y.lower_bound({p[i].y - d, -1});
        auto it2 = by_y.upper_bound({p[i].y + d, n + 1});
        for (auto it = it1; it != it2; ++it) {
            best = min(best, dist2(p[i], p[it->second]));
        }

        by_y.insert({p[i].y, i});
    }

    cout << fixed << setprecision(4) << sqrt((long double)best) << '\n';
    return 0;
}
