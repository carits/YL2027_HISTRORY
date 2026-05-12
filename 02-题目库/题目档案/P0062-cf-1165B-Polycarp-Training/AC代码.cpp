#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());
    int need = 1, ans = 0;
    for (int x : a) {
        if (x >= need) {
            ans++;
            need++;
        }
    }
    cout << ans << '\n';
    return 0;
}
