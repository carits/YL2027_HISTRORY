#include <bits/stdc++.h>
using namespace std;
long long s[1005][1005];
int main() 
{
	int t;
    cin >> t;
	while (t--) 
    {
        int n, q;
		cin >> n >> q;
		for (int i = 1; i <= 1000; i++)
			for (int j = 1; j <= 1000; j++)
				s[i][j] = 0;
		while (n--)
        {
            int h, w;
            cin >> h >> w;
            s[h][w] += h * w;
        }
		for (int i = 1; i <= 1000; i++)
			for (int j = 1; j <= 1000; j++)
				s[i][j] += s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
		while (q--)
        {
            int hs, ws, hb, wb;
            cin >> hs >> ws >> hb >> wb;
            cout << s[hb - 1][wb - 1] - s[hb - 1][ws] - s[hs][wb - 1] + s[hs][ws] << "\n";
        }
	}
	return 0;
}