#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[100009];
int vis[10000009];
int b[1000009];
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(vis,0,sizeof(vis));
        int n;
        cin>>n;
        int num=0,ans=0;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
            b[i]=a[i];
            num+=a[i];
        }
        for(int i1=1;i1<=n;++i1)
        {
            for(int j=1;j<=n;++j)
            {
                a[j]=b[j];
            } 
            int i=i1;
            int sum=0;
            while(1)
            {
                if(a[i]==0)
                {
                    i=(i%n)+1;
                    continue;
                }
                a[i]--;
                sum++;
                if(sum==num)
                {
                    if(vis[i]==0)
                    {
                        ans++;
                    }
                    vis[i]=1;
                    break;
                } 
                i=(i%n)+1;
            }
        }
        cout<<ans<<endl;
    }
}