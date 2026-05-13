#include<bits/stdc++.h>
using namespace std;
const int kMaxN=2e5+10;
long long n,m,x,s[kMaxN];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        s[i]=s[i-1]+x;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>x;
        long long l=0,r=n+1,mid;
        while(l+1<r)
        {
            mid=(l+r)/2;
            if(s[mid]<x)
            {
                l=mid;
            }
            else
            {
                r=mid;
            }
        }
        cout<<r<<' '<<x-s[r-1]<<endl;
    }
    return 0;
}