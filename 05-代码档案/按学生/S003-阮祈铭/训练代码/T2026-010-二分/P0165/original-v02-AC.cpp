#include<bits/stdc++.h>
using namespace std;
int n,m,q,a[1000010]={INT_MIN};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n>>m;
    a[n+1]=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    while(m--)
    {
        cin>>q;
        int l=0,r=n+1,mid;
        while(l+1<r)
        {
            mid=(l+r)/2;
            if(a[mid]>=q)
            {
                r=mid;
            }
            else
            {
                l=mid;
            }
        }
        if(a[r]==q)
        {
            cout<<r<<' ';
        }
        else
        {
            cout<<-1<<' ';
        }
    }
    return 0;
}