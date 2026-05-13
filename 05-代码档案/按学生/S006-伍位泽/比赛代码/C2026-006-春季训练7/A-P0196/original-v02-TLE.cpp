#include <bits/stdc++.h>
using namespace std;
bool vis[55];
int Q , n , cnt=0;
void dfs (int k , string s)
{
    if (k==n+1)
    {
        if (cnt<=n)
        {
            cout << s << "\n";
            cnt++;
        }
        return;
    }
    int kk=s.size ( );
    for (int i=1;i<=n;i++)
    {   
        if (kk<=2)
        {
            if (vis[i]==0)
            {
                vis[i]=1;
                dfs (k+1 , s+char (i+'0')+" ");
                vis[i]=0;
            }
        }
        else if (vis[i]==0&&s[kk-4]-'0'+s[kk-2]-'0'!=i)
        {
            vis[i]=1;
            dfs (k+1 , s+char (i+'0')+" ");
            vis[i]=0;
        }
    }
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> Q;
    while (Q--)
    {
        cin >> n;
        cnt=1;
        dfs (1 , "");
    }
    return 0;
}