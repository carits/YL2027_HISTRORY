#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    long long best = LLONG_MIN;
    vector<int> bestcut;
    for (int l = 1; l <= n; l++) {
        for (int r = l + 1; r <= n; r++) if (a[l] == a[r]) {
            long long sum = a[l] + a[r];
            vector<int> cut;
            for (int i = 1; i < l; i++) cut.push_back(i);
            for (int i = l + 1; i < r; i++) {
                if (a[i] >= 0) sum += a[i];
                else cut.push_back(i);
            }
            for (int i = r + 1; i <= n; i++) cut.push_back(i);
            if (sum > best) best = sum, bestcut = cut;
        }
    }
    cout << best << ' ' << bestcut.size() << '\n';
    for (int x : bestcut) cout << x << ' ';
    cout << '\n';
    return 0;
}
