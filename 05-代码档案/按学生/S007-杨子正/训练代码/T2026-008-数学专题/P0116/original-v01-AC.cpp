#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 110;
int a[N][N], f[N][N]; 
priority_queue<int> q;
int n, m; 
bool check(int x)
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f[i][j] = 0;
    f[1][1] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 && j == 1) continue;
            if (a[i][j] % x == 0)
                f[i][j] = f[i - 1][j] | f[i][j - 1];
        }
    return f[n][m];
}
void solve()
{
    while (!q.empty()) 
        q.pop();
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= sqrt(a[1][1]); i++)
        if (a[1][1] % i == 0)
        {
            q.push(i);
            q.push(a[1][1] / i);
        }
    while (!q.empty())
    {
        int x = q.top();
        q.pop();
        if (check(x))
        {
            cout << x << "\n";
            return;
        }
    }
}
signed main()
{
    int T;
    cin >> T;
    while (T--) 
        solve();
    return 0;
}