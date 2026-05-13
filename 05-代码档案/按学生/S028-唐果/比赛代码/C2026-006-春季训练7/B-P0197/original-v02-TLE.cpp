#include <bits/stdc++.h>
using namespace std;
#define int long long
int t,n,box[200005],res[200005],minn=200005,a[200005],sum1[200005],sum2[200005];
bool vis[200005];
void dfs(int x)
{
    if(x>n)
    {
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                if(sum1[j]-sum1[i-1]==sum2[j]-sum2[i-1])
                {
                    cnt++;
                }
            }
        }
        if(cnt<minn)
        {
            minn=cnt;
            for(int i=1;i<=n;i++)
            {
                res[i]=box[i];
            }            
        }
        return;
    }
    for(int i=1;i<=n;i++)
    {  
        if(vis[i]==0)
        {
            vis[i]=1;
            box[x]=i;
            sum2[x]=sum2[x-1]+i;
            dfs(x+1); 
            vis[i]=0;       
        }
    }
    }
signed main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=1;i<=n;i++) vis[i]=0;
        minn=200005;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            sum1[i]=sum1[i-1]+a[i];
        }
        dfs(1);
        //cout << minn << endl;
        for(int i=1;i<=n;i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;     
    }
    return 0;
}