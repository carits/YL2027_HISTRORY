#include <bits/stdc++.h>
using namespace std;
int a[100005];
int n , m;
bool sf (long long k)
{
    long long cnt=1;
    long long sum=0;
    for (int i=2;i<=n;i++)
    {
        sum+=a[i];
        if (sum>=k)
        {
            cnt++;
            sum=0;
        }
    }
    if (cnt>=m) return 1;
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
    sort (a+1 , a+n+1);
    for (int i=n;i>=1;i--)
    {
        a[i]-=a[i-1];
    }
    long long l=0 , r=1e14;
    while (l<r)
    {
        long long mid=(l+r+1)/2;
        if (sf (mid)==1)
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