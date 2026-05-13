#include<bits/stdc++.h>
using namespace std;
struct nd
{
    int l,r;
}a[300010],q[300010]={{INT_MIN,INT_MAX}},h[300010];
int n,ans=0;
int main()
{
    cin>>n;
    h[n+1]={INT_MIN,INT_MAX};
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].l>>a[i].r;
        q[i].r=min(a[i].r,q[i-1].r);
        q[i].l=max(a[i].l,q[i-1].l);
    }
    for(int i=n;i>=1;i--)
    {
        h[i].r=min(a[i].r,h[i+1].r);
        h[i].l=max(a[i].l,h[i+1].l);
    }
    cout<<h[2].l<<' '<<h[2].r<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            ans=max(ans,h[2].r-h[2].l);
        }
        else if(i==n)
        {
            ans=max(ans,q[n-1].r-q[n-1].l);
        }
        else
        {
            ans=max(ans,min(q[i-1].r,h[n-i].r)-max(q[i-1].l,h[n-i].l));
        }
    }
    cout<<ans<<endl;
    return 0;
}