#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<long long> a(n), gap;
    for (auto &x : a) cin >> x;
    for (int i = 1; i < n; i++) gap.push_back(a[i] - a[i - 1]);
    sort(gap.rbegin(), gap.rend());
    long long ans = a.back() - a.front();
    for (int i = 0; i < k - 1; i++) ans -= gap[i];
    cout << ans << '\n';
    return 0;
}
