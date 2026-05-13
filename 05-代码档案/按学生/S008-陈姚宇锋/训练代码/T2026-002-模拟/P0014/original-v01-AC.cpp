#include <bits/stdc++.h>
using namespace std;
#define int long long
int vis[1000009];
signed main()
{
    int n,k;
    cin>>n>>k;
    int sum=1;
    while(k--)
    {
        for(int i=1;i<=n;++i)
        {
            if(i%sum==0)
            {
                if(vis[i]==0)
                {
                    vis[i]=1;
                }
                else
                {
                    vis[i]=0;
                }
            }
        }
        sum++;
    }
    for(int i=1;i<=n;++i)
    {
        if(vis[i]==1)
        {
            cout<<i<<' ';
        }
    }

	return 0;
}	