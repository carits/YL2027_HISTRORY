#include <bits/stdc++.h>
using namespace std;

long long merge_count(vector<long long> &a, vector<long long> &tmp, int l, int r) {
    if (r - l <= 1) return 0;
    int m = (l + r) >> 1;
    long long ans = merge_count(a, tmp, l, m) + merge_count(a, tmp, m, r);
    int i = l, j = m, k = l;
    while (i < m || j < r) {
        if (j == r || (i < m && a[i] <= a[j])) {
            tmp[k++] = a[i++];
        } else {
            ans += m - i;
            tmp[k++] = a[j++];
        }
    }
    for (int p = l; p < r; p++) a[p] = tmp[p];
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n), tmp(n);
    for (auto &x : a) cin >> x;
    cout << merge_count(a, tmp, 0, n) << '\n';
    return 0;
}
