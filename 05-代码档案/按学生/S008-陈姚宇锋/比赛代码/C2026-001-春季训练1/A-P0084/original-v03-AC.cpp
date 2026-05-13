#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[10009];
int vis[100009];
int b[100009];
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int num=0,ans=0;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
            num=max(num,a[i]); 
        }
        for(int i=1;i<=n;++i)
        {
            if(num==a[i])
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}