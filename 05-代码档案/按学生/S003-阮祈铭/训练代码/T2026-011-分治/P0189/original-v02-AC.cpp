#include<bits/stdc++.h>
using namespace std;
struct nd
{
    long long x,y;
}a[200010],tmp[200010];
bool cmpx(nd a,nd b)
{
    return a.x < b.x;
}
bool cmpy(nd a,nd b)
{
    return a.y < b.y;
}
long long n;
double d=INT_MAX;
void f(long long l,long long r)
{
    if(l==r)
    {
        return;
    }
    int m=(l+r)/2,mx=a[m].x;
    f(l,m);
    f(m+1,r);
    int cnt=0;
    for(int i=l;i<=r;i++)
    {
        if(abs(a[i].x-mx)<d)
        {
            cnt++;
            tmp[cnt]=a[i];
        }
    }
    sort(tmp+1,tmp+cnt+1,cmpy);
    for(int i=1;i<=cnt;i++)
    {
        for(int j=i+1;j<=cnt;j++)
        {
            if(tmp[j].y-tmp[i].y>=d)
            {
                break;
            }
            d=min(d,sqrt((tmp[i].x-tmp[j].x)*(tmp[i].x-tmp[j].x) + (tmp[i].y-tmp[j].y)*(tmp[i].y-tmp[j].y)));
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+n+1,cmpx);
    f(1,n);
    cout<<setprecision(4)<<fixed<<d<<endl;
    return 0;
}