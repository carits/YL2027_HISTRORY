#include<bits/stdc++.h>
using namespace std;
struct cow
{
    int w,p;
}a[50010];
bool cmp(cow a,cow b)
{
    return a.w<b.w;
}
int n,ans,sumw;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].w>>a[i].p;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,sumw-a[i].p);
        sumw+=a[i].w;
    }
    cout<<ans<<endl;
    return 0;
}