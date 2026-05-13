#include <bits/stdc++.h>
using namespace std;
long long a, b;
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> a >> b;
    long long x = b - a / 4 * 6, y = (a - 2 * (b - a / 4 * 6)) / 4;
    if (2 * x + 4 * y == a && 4 * x + 6 * y == b && x >= 0 && y >= 0) cout << x << ' ' << y;
    else cout << "Impossible!";
    return 0;
}