#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
int a[N][10];
int main()
{
	int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int xx, yy;
        cin >> a[i][1] >> a[i][2] >> xx >> yy;
        a[i][3] = a[i][1] + xx, a[i][4] = a[i][2] + yy;
    }
    int x, y;
    cin >> x >> y;
    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
        if (x >= a[i][1] && y >= a[i][2] && x <= a[i][3] && y <= a[i][4])
            ans = i;
    }
    cout << ans;
	return 0;
}