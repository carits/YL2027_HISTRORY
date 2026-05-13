#include<bits/stdc++.h>
using namespace std;
int n,m,i;
struct node{
    int a[20];
}a[10010];
bool cmp(const node &a,const node &b)
{
    for(int i=1;i<m;i++)
    {
        if(a.a[i]!=b.a[i])
            return a.a[i]>b.a[i];
    }
    return false;
}
int main()
{
    int n,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cin>>a[i].a[j];
    }
    sort(a+1,a+n+1,cmp);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i].a[j]<<' ';
        cout<<endl;
    }
    return 0;
}