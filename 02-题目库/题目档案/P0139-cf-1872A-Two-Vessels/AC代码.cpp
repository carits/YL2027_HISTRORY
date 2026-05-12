#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long d = llabs(a - b);
        cout << (d + 2 * c - 1) / (2 * c) << '\n';
    }
    return 0;
}
