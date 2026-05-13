#include<bits/stdc++.h>

using namespace std;

int t, n, a[105], cnt;
bool vis[105];

void dfs(int x)
{
    if(cnt == n)
    {
        return ;
    }
    
    if(x > n)
    { 
        bool v = 0; 
        
        for(int i = 1; i <= n; i++)
        {
            if(a[i - 1] + a[i - 2] == a[i])
            {
                v = 1;
                break;
            }
        }
        
        if(v == 0)
        {
            for(int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
            
            cnt++;
        }
        
        return ;
    }
    
    for(int i = 1; i <= n; i++)
    {
        if(vis[i] == 0)
        {
            vis[i] = 1;
            a[x] = i;
            
            dfs(x + 1);
            
            vis[i] = 0;
        }
    }
    
    return ;
}

int main()
{
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        
        cnt = 0;
        dfs(1);
    }
    return 0;
}