#include <bits/stdc++.h>
using namespace std;
#define int long long
int t,n,cnt,box[1005];
bool vis[1005];
void dfs(int x)
{
    if(cnt>=n) return;
    if(x>n)
    {
        bool flag=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0) flag=1;
            vis[i]=0;
        }
        if(flag) return;
        for(int i=1;i<=n;i++)
        {
            cout << box[i] << " ";
            box[i]=0;
        }
        cout << endl; 
        cnt++;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0&&i!=box[x-1]+box[x-2])
        {
            //cout << i << x << " " << box[x-1] << box[x-2] << endl;
            vis[i]=1;
            box[x]=i;
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
        cnt=0;
        for(int i=1;i<=n;i++) vis[i]=0;
        dfs(1);
    }
    return 0;
}