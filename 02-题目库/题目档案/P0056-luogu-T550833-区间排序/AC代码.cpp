#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (auto &p : a) cin >> p.first >> p.second;
    sort(a.begin(), a.end());
    for (auto [l, r] : a) cout << l << ' ' << r << '\n';
    return 0;
}
