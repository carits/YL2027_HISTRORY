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
        for(int i=1;i<=n;i++)
        {
            cout << box[i] << " ";
        }
        cout << endl; 
        cnt++;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0    &&i!=box[x-1]+box[x-2])
        {
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