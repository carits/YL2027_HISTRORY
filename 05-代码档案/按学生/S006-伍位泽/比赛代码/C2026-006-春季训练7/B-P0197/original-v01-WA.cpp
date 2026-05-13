#include <bits/stdc++.h>
using namespace std;
int a[200005];
bool vis[200005];
int Q , n;
bool p=0;
void dfs (int step , string s)
{
    if (p==1) return;
    if (step==n+1)
    {
        p=1;
        cout << s << "\n";
        return;
    }
    for (int i=1;i<=n;i++)
    {
        if (vis[i]==0)
        {
            vis[i]=1;
            dfs (step+1 , s+to_string (i)+" ");
            vis[i]=0;
        }
    }
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> Q >> n;
    while (Q--)
    {
        cin >> n;
        p=0;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        dfs (1 , "");
    }
    return 0;
}