#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
    freopen("lttl.in", "r", stdin);
    freopen("lttl.out", "w", stdout);
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> a >> b;
    if (a & 1 || b & 1|| a <= 1 || b <= 0 || ){
        cout << "Impossible!\n";
        return 0;
    }
    cout  <<  b - a / 4 * 6 << " "<< (a - 2 * (b - a / 4 * 6)) / 4;
    return 0;
}