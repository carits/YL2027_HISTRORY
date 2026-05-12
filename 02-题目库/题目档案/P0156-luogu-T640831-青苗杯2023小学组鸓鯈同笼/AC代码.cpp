#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;
    long long t = 2 * a - b;
    if (t < 0 || t % 2 != 0) {
        cout << "Impossible!\n";
        return 0;
    }
    long long y = t / 2;
    long long rem = a - 4 * y;
    if (rem < 0 || rem % 2 != 0) {
        cout << "Impossible!\n";
        return 0;
    }
    long long x = rem / 2;
    if (2 * x + 4 * y == a && 4 * x + 6 * y == b) cout << x << ' ' << y << '\n';
    else cout << "Impossible!\n";
    return 0;
}
