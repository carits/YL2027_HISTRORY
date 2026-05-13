#include <bits/stdc++.h>

using namespace std;

#define int long long

const int kMaxn = 1e5+10; 

int a[kMaxn];
map<int,int>vis;

signed main()
{
    int maxx=0; 
    int n;
    int cnt=0;
    
    cin>>n;    
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        vis[a[i]]+=1;
    }
    
    for(int i=1;i<=n;++i)
    {
        for(int sum=2;sum<=2e9+1;sum*=2)
        {
            if(sum<a[i])
            {
                continue;
            } 
            if(vis[sum-a[i]]>=1)
            {
                if(sum==a[i]*2)
                {
                    if(vis[sum-a[i]]>1)
                    {
                        cnt+=vis[sum-a[i]]-1;
                    }
                }
                else
                {
                    cnt+=vis[sum-a[i]];
                }
            }
        } 
    }
    cout<<cnt/2;
    return 0;
}