#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string x, y;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++) {
        if (y[i] > x[i]) {
            cout << -1 << '\n';
            return 0;
        }
    }
    cout << y << '\n';
    return 0;
}
