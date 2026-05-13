#include <bits/stdc++.h>
using namespace std;
int h, w, q, b[505][505], c[505][505], xa, ya, xb, yb;
char s[505][505];
bool a[505][505];
int main()
{
	cin >> h >> w;
	for (int i = 1; i <= h; i++)
		for (int j = 1; j <= w; j++)
			cin >> s[i][j];
	for (int i = 1; i <= h; i++)
		for (int j = 1; j <= w; j++)
			if (s[i][j] == '.')
				a[i][j] = 1;
			else
				a[i][j] = 0;
	for (int i = 1; i <= h; i++)
		for (int j = 1; j <= w; j++)
		{
			b[i][j] = b[i][j - 1] + b[i - 1][j] - b[i - 1][j - 1];
			c[i][j] = c[i][j - 1] + c[i - 1][j] - c[i - 1][j - 1];
			if (a[i][j])
            {
                if (a[i - 1][j])
					b[i][j]++;
				if (a[i][j - 1])
					c[i][j]++;
            }
		}
	cin >> q;
	while (q--)
	{
		cin >> xa >> ya >> xb >> yb;
		cout << b[xb][yb] + b[xa][ya - 1] - b[xa][yb] - b[xb][ya - 1] + c[xb][yb] + c[xa - 1][ya] - c[xb][ya] - c[xa - 1][yb] << "\n";
	}
	return 0;
}