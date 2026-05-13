#include<bits/stdc++.h>
using namespace std;
int n,m,i;
const int kMaxN=1e4+10;
const int kMaxM=20;
struct node{
    int x[kMaxM];
}a[kMaxN];
bool cmp(const node &a,const node &b)
{
    for(int i=1;i<=m;i++)
    {
        if(a.x[i]!=b.x[i])
            return a.x[i]>b.x[i];
    }
    return false;
}
int main()
{
    int n;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>a[i].x[j];
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<a[i].x[j]<<' ';
        cout<<endl;
    }
    return 0;
}