#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    string s;
    cin >> n >> x >> y >> s;
    int ans = 0;
    for (int i = n - x; i < n; i++) {
        char need = (i == n - 1 - y ? '1' : '0');
        if (s[i] != need) ans++;
    }
    cout << ans << '\n';
    return 0;
}
