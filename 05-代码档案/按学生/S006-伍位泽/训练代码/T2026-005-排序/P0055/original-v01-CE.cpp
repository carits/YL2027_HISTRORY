#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a , b;
};
node a[1005][105];
bool cmp (node a , node b)
{
    return a.a>b.a;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie (0);
    int n , m;
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cin >> a[i][j].a;
            a[i][j].b=i;
        }
    }
    for (int i=1;i<=n;i++)
    {
        sort (a[i][1] , a[i][m] , cmp);
        for (int j=1;j<=m;j++)
        {
            a[i][j].b << " ";
        }
        cout << "\n";
    }
   return 0;
}