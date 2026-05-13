#include <bits/stdc++.h>
using namespace std;
int a[1005] , b[200005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int maxn=-1e9;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for (int i=1;i<=n;i++)
    {   
        for (int j=i+1;j<=n;j++)
        {
            b[a[i]+a[j]]++;     
        }
    }
    for (int i=1;i<=200000;i++)
    {
        maxn=max (maxn , b[i]);
    }
    cout << maxn;
    return 0;
}