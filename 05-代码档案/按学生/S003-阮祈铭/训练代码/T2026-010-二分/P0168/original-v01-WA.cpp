#include<bits/stdc++.h>
using namespace std;
struct ch
{
    int x,y;
}a[100010];
int n,k;
bool check(int b)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt+=a[i].x/b+a[i].y/b;
    }
    return cnt>=k;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    int l=0,r=100010,mid;
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(check(mid))
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
    }
    cout<<l<<endl;
    return 0;
}