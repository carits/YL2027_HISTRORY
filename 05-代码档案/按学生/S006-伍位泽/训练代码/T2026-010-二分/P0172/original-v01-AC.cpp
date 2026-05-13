#include <bits/stdc++.h>
using namespace std;
int v[500005];
int n , a , b;
bool sf (int k)
{
    long long cnt=0;
    for (int i=1;i<=n;i++)
    {
        if (v[i]-a*k<=0) continue;
        cnt+=(v[i]-a*k+b-1)/b;
    }
    if (cnt<=k) return 1;
    return 0;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> a >> b;
    for (int i=1;i<=n;i++)
    {
        cin >> v[i];
    }
    int l=0 , r=500000;
    while (l<r)
    {
        int mid=(l+r)/2;
        if (sf (mid)==1)
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    cout << l;
    return 0;
}