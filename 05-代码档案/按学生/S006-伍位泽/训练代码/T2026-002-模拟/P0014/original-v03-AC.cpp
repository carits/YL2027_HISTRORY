#include <bits/stdc++.h>
using namespace std;
bool a[10005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , k;
    cin >> n >> k;
    for (int i=1;i<=k;i++)
    {
        for (int j=1;j<=n/i;j++)
        {
            a[i*j]=1-a[i*j];
        }
    }
    for (int i=1;i<=n;i++)
    {
        if (a[i]==1)
        {
            cout << i << " ";
        }
    }
    return 0;
}