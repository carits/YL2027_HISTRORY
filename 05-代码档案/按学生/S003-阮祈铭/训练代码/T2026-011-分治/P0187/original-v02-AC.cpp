#include<bits/stdc++.h>
using namespace std;
int n,a[500010],b[500010],c[500010];
long long cnt;
int x[500010];
void f(int l,int r)
{
    if(l==r)
    {
        return;
    }
    else if(l+1==r)
    {
        if(a[l]<a[r])
        {
            return;
        }
        else
        {
            cnt++;
            return;
        }
    }
    else
    {
        int m=(l+r)/2;
        int len = (m-l)+1;
        for(int i=l;i<=m;i++)
        {
            x[i-l+1]=a[i];
        }
        sort(x+1,x+len+1);
        for(int i=(l+r)/2+1;i<=r;i++)
        {
            cnt+=len-(upper_bound(x+1,x+len+1,a[i])-(x+1));
        }
        f(l,m);
        f(m+1,r);
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    f(1,n);
    cout<<cnt;
    return 0;
}