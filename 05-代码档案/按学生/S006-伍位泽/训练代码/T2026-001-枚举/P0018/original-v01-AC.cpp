#include <bits/stdc++.h>
using namespace std;
int a[5005] , b[5005];
int main ( )
{
    int n;
    cin >> n;
    int maxn=-1e9;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        b[i]=b[i-1]+a[i];
        maxn=max (maxn , b[i]);
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=i;j<=n;j++)
        {
            maxn=max (maxn , b[j]-b[i]);
        }
    }
    cout << maxn;
    return 0;
}