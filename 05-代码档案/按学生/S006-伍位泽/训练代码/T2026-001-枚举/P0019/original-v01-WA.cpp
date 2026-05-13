#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main ( )
{
    int n , t;
    cin >> n >> t;
    int maxn=-1e9;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (a[i]+a[j]<=t)
            {
                maxn=a[i]+a[j];
            }
        }
    }
    if (maxn==-1e9)
    {
        cout << 0;
    }
    else
    {
        cout << maxn;
    }
    return 0;
}