#include<bits/stdc++.h>
using namespace std;
struct node{
    int y,s,e,num;
}a[310];
bool cmp(const node &a,const node &b)
{
    if(a.y+a.s+a.e!=b.y+b.s+b.e)
        return a.y+a.s+a.e>b.y+b.s+b.e;
    else if(a.y!=b.y)
        return a.y>b.y;
    else
        return a.num<b.num;
}
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i].y>>a[i].s>>a[i].e;
        a[i].num=i;
    }
    sort(a+1,a+n+1,cmp);
    for(i=1;i<=5;i++)
        cout<<a[i].num<<' '<<a[i].y+a[i].s+a[i].e<<endl;
    return 0;
}