#include<bits/stdc++.h>
using namespace std;
int n,a,b,w[500010];
bool check(int x)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if((long long)a*x<w[i])
        {
            cnt+=ceil(1.0*(w[i]-a*x)/b);
        }
    }
    return cnt<=x;
}
int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }
    int l=0,r=5*100000+100,mid;
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(check(mid))
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<r<<endl;
    return 0;
}