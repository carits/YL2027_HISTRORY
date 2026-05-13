#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,t,ans;
int a[100009];
signed main()
{
    cin>>n>>t;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    int j=n;
    for(int i=1;i<j;)
    {
        if(a[i]+a[j]>t)
        {
            j--;
        }
        else
        {
            ans=max(ans,a[i]+a[j]);
            i++;
        }
    }
    cout<<ans;
    return 0;
}