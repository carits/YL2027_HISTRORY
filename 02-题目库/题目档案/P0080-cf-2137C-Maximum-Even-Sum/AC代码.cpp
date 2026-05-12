#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        long long a, b;
        cin >> a >> b;
        if (b & 1) {
            if (a & 1) cout << a * b + 1 << '\n';
            else cout << -1 << '\n';
        } else {
            if (a % 2 == 0) cout << a * (b / 2) + 2 << '\n';
            else if (b % 4 == 0) cout << a * (b / 2) + 2 << '\n';
            else cout << -1 << '\n';
        }
    }
    return 0;
}
