#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[1000009];
bool check(int x)
{
    for(int i=1;i<=n-x+1;++i)
    {
        int flag=0;
        for(int j=i+1;j<=i+x-1;++j)
        {
            if(a[j]>=a[j-1]*2)
            {
                flag=1;
            }
        } 
        if(flag==0)
        {
            return 1;
        }
    }
    return 0;
}
signed main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    int l=0,r=n+1;
    while(l+1<r)
    {
        int mid=(l+r)/2;
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