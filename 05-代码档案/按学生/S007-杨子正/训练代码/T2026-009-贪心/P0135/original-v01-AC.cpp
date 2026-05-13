#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int a[N][N];
int main()
{
    int T;
    cin >> T;
	while (T--)
    {
        int n;
		cin >> n;
        char c;
        int ans = 0;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
                cin >> c, a[i][j] = c - 'a';
		for (int i = 1; i <= n / 2; i++)
			for (int j = 1; j <= n / 2; j++)
            {
				int maxx = max({a[i][j], a[n - j + 1][i], a[j][n - i + 1], a[n - i + 1][n - j + 1]});
				int cnt = a[i][j] + a[n - j + 1][i] + a[j][n - i + 1] + a[n - i + 1][n - j + 1];
				ans += maxx * 4 - cnt;
			}
		cout << ans << "\n";
	}
	return 0;
}