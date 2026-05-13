#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000010];
bool check(int h)
{
    long long cnt=0;
    for(int i=1;i<=n;i++)
    {
        cnt+=max((long long)0,a[i]-h);
    }
    return cnt>=m;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long l=0,r=4e5+10,mid;
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