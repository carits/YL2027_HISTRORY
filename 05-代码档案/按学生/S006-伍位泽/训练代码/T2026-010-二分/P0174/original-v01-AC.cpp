#include <bits/stdc++.h>
using namespace std;
int a[100005];
int n , v;
bool sf (int k)
{
    for (int i=1;i<=n;i++)
    {
        k+=a[i];
        if (k<=0) return 0;
    }
    return 1;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int l=1 , r=1e8+1;
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