#include <bits/stdc++.h>
using namespace std;

long long C[31][31];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i <= 30; i++) {
        C[i][0] = C[i][i] = 1;
        for (int j = 1; j < i; j++) C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
    }

    int T;
    cin >> T;
    while (T--) {
        long long n;
        int k;
        cin >> n >> k;
        int d = 0;
        while (n % 2 == 0) {
            n /= 2;
            d++;
        }
        long long ans = 0;
        for (int mx = 0; mx < d; mx++) {
            for (int cnt = 1; cnt <= mx + 1; cnt++) {
                if (mx + cnt > k) ans += C[mx][cnt - 1];
            }
        }
        if (d + 1 > k) ans++;
        cout << ans << '\n';
    }
    return 0;
}
