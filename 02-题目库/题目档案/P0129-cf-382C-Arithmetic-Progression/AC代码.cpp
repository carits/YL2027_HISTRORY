#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    if (n == 1) {
        cout << -1 << '\n';
        return 0;
    }
    if (n == 2) {
        long long d = a[1] - a[0];
        set<long long> ans;
        ans.insert(a[0] - d);
        ans.insert(a[1] + d);
        if (d % 2 == 0) ans.insert(a[0] + d / 2);
        cout << ans.size() << '\n';
        int idx = 0;
        for (auto x : ans) {
            if (idx++) cout << ' ';
            cout << x;
        }
        cout << '\n';
        return 0;
    }

    vector<long long> d;
    for (int i = 1; i < n; i++) d.push_back(a[i] - a[i - 1]);
    map<long long, int> cnt;
    for (auto x : d) cnt[x]++;

    vector<long long> ans;
    if (cnt.size() == 1) {
        long long g = d[0];
        ans.push_back(a[0] - g);
        ans.push_back(a.back() + g);
    } else if (cnt.size() == 2) {
        auto it = cnt.begin();
        long long small = it->first; int cs = it->second;
        ++it;
        long long big = it->first; int cb = it->second;
        if (cb == 1 && big == 2 * small) {
            for (int i = 1; i < n; i++) {
                if (a[i] - a[i - 1] == big) ans.push_back(a[i - 1] + small);
            }
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    cout << ans.size() << '\n';
    if (!ans.empty()) {
        for (int i = 0; i < (int)ans.size(); i++) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }
    return 0;
}
