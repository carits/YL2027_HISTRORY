#include<bits/stdc++.h>
using namespace std;
int n,a[500010],b[500010],c[500010],cnt;
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
        int x[500010];
        for(int i=l;i<=(l+r)/2;i++)
        {
            x[i-l+1]=a[i];
        }
        sort(x+1,x+(l+r)/2+1);
        for(int i=(l+r)/2+1;i<=r;i++)
        {
            cnt+=(l+r)/2-(upper_bound(x+1,x+(l+r)/2+1,a[i])-x)+1;
        }
        f(l,(l+r)/2);
        f((l+r)/2+1,r);
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