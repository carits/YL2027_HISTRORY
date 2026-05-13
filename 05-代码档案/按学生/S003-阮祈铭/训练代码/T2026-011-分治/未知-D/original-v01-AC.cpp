#include<bits/stdc++.h>
using namespace std;
struct nd
{
    int h,w,d;
}a[200010],tmp[200010];
bool cmp(nd a,nd b)
{
    if(a.h!=b.h)
    {
        return a.h<b.h;
    }
    else if(a.w!=b.w)
    {
        return a.w>b.w;
    }
    return a.d>b.d;
}
bool cmp1(nd a,nd b)
{
    return a.w<b.w;
}
int n;
void f(int l,int r)
{
    if(l==r)
    {
        return;
    }
    int m=(l+r)/2;
    f(l,m);
    f(m+1,r);
    sort(a+l,a+m+1,cmp1);
    sort(a+m+1,a+r+1,cmp1);
    int minn=INT_MAX;
    for(int i=l,j=m+1;j<=r;j++)
    {
        for(;a[i].w<a[j].w && i<=m;i++)
        {
            minn=min(minn,a[i].d);
        }
        if(a[j].d>minn)
        {
            cout<<"Yes\n";
            exit(0);
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int tmp[3];
        cin>>tmp[0]>>tmp[1]>>tmp[2];
        sort(tmp,tmp+3);
        a[i].h=tmp[0],a[i].w=tmp[1],a[i].d=tmp[2];
    }
    sort(a+1,a+n+1,cmp);
    f(1,n);
    cout<<"No\n";
    return 0;
}