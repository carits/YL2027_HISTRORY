#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for (int k = 2; k <= 30; k++) {
            int d = (1 << k) - 1;
            if (n % d == 0) {
                cout << n / d << '\n';
                break;
            }
        }
    }
    return 0;
}
