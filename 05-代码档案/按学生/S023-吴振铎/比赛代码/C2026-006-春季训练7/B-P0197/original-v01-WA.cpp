#include<bits/stdc++.h>
using namespace std;
int n,p[200010],q[200010],vis[200010];
int m=INT_MAX,ma[200010],b[200010],a[200010];
int dfs(int selp)
{
    if(m==1)return 0;
    if(selp==n+1)
    {
        int cnt=0;
        //for(int i=1;i<=n;i++)cout<<q[i]<<" ";
        //cout<<"\n";
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[i]-a[i-1]==b[i]-b[i-1])
                {
                    cnt++;
                }
                if(cnt>=m)
                {
                    return 0;
                }
            }
        }
        m=cnt;
        for(int i=1;i<=n;i++)
        {
            ma[i]=q[i];
        }
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0&&p[selp]!=i)
        {
            q[selp]=i;
            vis[i]=1;
            b[selp]=b[selp-1]+i;
            dfs(selp+1);
            vis[i]=0;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(p,0,sizeof(p));
        memset(q,0,sizeof(q));
        memset(vis,0,sizeof(vis));
        n=0;
        m=INT_MAX;
        memset(ma,0,sizeof(ma));
        cin>>n;
        a[0]=0;
        b[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>p[i];
            a[i]=a[i-1]+p[i];
        }
        dfs(1);
        for(int i=1;i<=n;i++)cout<<ma[i]<<" ";
        cout<<"\n";
    }
    return 0;
} 