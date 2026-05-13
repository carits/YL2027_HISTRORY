#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int n , m;
bool sum (int k)
{
    long long x=0;
    for (int i=1;i<=n;i++)
    {
        if (a[i]>=k)
        {
            x+=a[i]-k;
        }
    }
    if (x>=m) return 1;
    return 0;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int l=0 , r=2000000000;
    while (l<r)
    {
        int mid=(l+r+1)/2;
        if (sum (mid)==1)
        {
            l=mid;
        }
        else
        {
            r=mid-1;
        }
    }
    cout << l;
    return 0;
}