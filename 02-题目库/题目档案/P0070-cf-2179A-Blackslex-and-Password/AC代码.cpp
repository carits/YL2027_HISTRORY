#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        long long k, x;
        cin >> k >> x;
        cout << k * x + 1 << '\n';
    }
    return 0;
}
