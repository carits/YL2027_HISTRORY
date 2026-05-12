#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1), pre(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
    }

    int best = 1, mn = INT_MAX;
    for (int i = 1; i + k - 1 <= n; i++) {
        int sum = pre[i + k - 1] - pre[i - 1];
        if (sum < mn) {
            mn = sum;
            best = i;
        }
    }
    cout << best << '\n';
    return 0;
}
