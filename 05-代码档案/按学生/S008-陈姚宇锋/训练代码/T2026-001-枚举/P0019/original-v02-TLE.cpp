#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,t;
int a[100009];
signed main()
{
    cin>>n>>t;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        
    }
    int sum=0;
    sort(a+1,a+1+n);
    for(int i=1;i<=n;++i)
    {
        if(a[i]>t)
        {
            sum=i;
            break;
        }
    }
    int maxx=0;
    for(int i=1;i<=sum;++i)
    {
        for(int j=i+1;j<=sum;++j)
        {
            if(a[i]+a[j]<=t)
            {
                maxx=max(a[i]+a[j],maxx);
            }
        }
    }
    cout<<maxx;
    return 0;
}