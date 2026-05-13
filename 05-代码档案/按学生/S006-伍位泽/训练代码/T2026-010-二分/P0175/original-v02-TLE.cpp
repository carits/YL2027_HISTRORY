#include <bits/stdc++.h>
using namespace std;
int a[100005];
int n , k;
bool sf (int p)
{
    long long cnt=0;
    for (int i=1;i<=n;i++)
    {
        cnt+=a[i]/p;
    }
    if (cnt>=k) return 1;
    return 0;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int l=0 , r=1e8;
    while (l<r)
    {
        int mid=(l+r)/2;
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