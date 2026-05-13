#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a[15];
};
node s[10005];
int n , m;
bool cmp (node a , node b)
{
    for (int i=1;i<=m;i++)
    {
        if (a.a[i]!=b.a[i])
        {
            return a.a[i]>b.a[i];
        }
    }
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie (0);
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cin >> s[i].a[j];
        }
    }
    sort (s+1 , s+n+1 , cmp);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cout << s[i].a[j] << " ";
        }
        cout << "\n";
    }
   return 0;
}