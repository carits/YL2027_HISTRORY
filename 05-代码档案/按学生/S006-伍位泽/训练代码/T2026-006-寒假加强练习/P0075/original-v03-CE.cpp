#include <bits/stdc++.h>
using namespace std;
long long a[100005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n;
    long long maxn=-1e9 , v;
    cin >> t;
    while (t--)
    {
        cin >> n;
        maxn=-1e9;
        for (int i=1;i<=n;i++)
        {
            cin >> v;
            maxn=max (maxn , v);
            a[i]=a[i-1]+v;
        }
        for (int i=1;i<=n;i++)
        {
            for (int j=i+1;j<=n;j++)
            {
                maxn=max (maxn , (a[j]-a[i])/(j-i+1))
            }
        }
        cout << maxn << "\n";
    }
    return 0;
}