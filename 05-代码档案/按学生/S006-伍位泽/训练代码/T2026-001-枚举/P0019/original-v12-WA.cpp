#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long t;
    cin >> n >> t;
    long long maxn=0;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for (int i=1,j=n;i<=n;i++)
    {
        for (;j>i;j--)
        {
            long long m=a[i]+a[j];
            if (m<=t&&m>maxn)
            {
                maxn=m;
                break;
            }
        }
    }
    cout << maxn;
    return 0;
}