#include<bits/stdc++.h>
using namespace std;
#define int long long
map<int,int>q;
vector<int>g[2000];
signed main()
{
    freopen("plan.in","r",stdin);
    freopen("plan.out","w",stdout);
    int n,m,k;
    cin>>n>>m>>k;
    for(int i = 1; i <= n; i++)
    {
        int c;
        cin>>c;
        for(int j = 1; j <= c; j++)
        {
            int x;
            cin>>x;
            g[i].push_back(x);
        }
    }
    int ans=0; 
    for(int i = 1; i < n; i++)
    {
        for(int j = i+1; j <= n; j++)
        {
            if(j-i+1>ans)
            {
                int cnt=0;
                for(int k = i; k < j; k++)
                {
                    for(int k1 = k+1;k1<=j;k1++)
                    {
                        if(g[k].size()!=g[k].size())
                        {
                            cnt++;
                            continue;
                        }
                        for(int kk = 0; kk < g[k].size();kk++)
                        {
                            q[g[k][kk]]++;
                        }
                        int flag=0;
                        for(int kk = 0; kk < g[k1].size();kk++)
                        {
                            q[g[k1][kk]]++;
                            if(q[g[k1][kk]]>1)
                            {
                                flag=1;
                                break;
                            }
                        }
                        if(!flag)cnt++;
                        q.clear();
                    }
                }
                if(cnt<k)
                {
                    ans=j-i+1;
                }
            }
            
        }
    }
    cout<<ans;
    return 0;
}
