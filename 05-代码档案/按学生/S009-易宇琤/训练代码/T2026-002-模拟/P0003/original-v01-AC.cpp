#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;
int l, m;
int ans;
bool vis[N];
int main()
{
    cin >> l >> m;
    for(int i = 0; i <= l; i ++)
        vis[i] = 1;
    for(int i = 1; i <= m; i ++)
    {
        int u, v;
        cin >> u >> v;
        for(int j = u; j <= v; j ++)
            vis[j] = 0;
    }
    for(int i = 0; i <= l; i ++)
        if(vis[i] == 1)
            ans ++;
    cout << ans;
    return 0;
}