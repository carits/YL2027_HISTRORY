#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[10];
    for (int i = 0; i < 10; i++) cin >> a[i];

    int h;
    cin >> h;
    h += 30;

    int ans = 0;
    for (int i = 0; i < 10; i++) {
        if (a[i] <= h) ans++;
    }

    cout << ans << '\n';
    return 0;
}
