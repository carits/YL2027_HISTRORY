#include<bits/stdc++.h>
using namespace std;
int n,m,i;
struct node{
    long long x[20];
}a[10010];
bool cmp(const node &a,const node &b)
{
    for(int i=1;i<m;i++)
    {
        if(a.x[i]!=b.x[i])
            return a.x[i]>b.x[i];
    }
    return false;
}
int main()
{
    long long n,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cin>>a[i].x[j];
    }
    sort(a+1,a+n+1,cmp);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i].x[j]<<' ';
        cout<<endl;
    }
    return 0;
}