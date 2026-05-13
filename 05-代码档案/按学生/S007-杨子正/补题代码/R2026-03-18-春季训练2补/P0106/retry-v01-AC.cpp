#include <bits/stdc++.h>
#define int long long
using namespace std; 
const int N = 2e5 + 5;
int t, n, m, h, b[N], c[N]; 
signed main() 
{
	cin >> t; 
	while (t--) 
    {
		cin >> n >> m >> h; 
		int a[n + 1][m + 1];
		for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++) 
                cin >> a[i][j]; 
		for (int i = 1; i <= n; i++) 
        {
			sort(a[i] + 1, a[i] + m + 1); 
			b[i] = c[i] = 0; 
			int cnt = 0;
			for (int j = 1; j <= m; j++) 
            {
				if (cnt + a[i][j] <= h) 
                    b[i]++, cnt += a[i][j], c[i] += cnt; 
				else break; 
			}
		}
		int id = 1; 
		for (int i = 2; i <= n; i++) 
			if (b[i] > b[1]) //
                id++;
			else
                if (b[i] == b[1]) 
                    if (c[i] < c[1]) 
                        id++;
		cout << id << "\n"; 
	}
    return 0; 
}