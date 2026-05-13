#include<bits/stdc++.h>

using namespace std;

int n, m;
bool vis[1000005];

void init(int x)
{
    vis[1] == 1;
    for(int i = 2; i * i <= x; i++)
    {
        if(vis[i] == 0)
        {
            for(int j = i * i; j <= x; j += i)
            {
                vis[j] = 1;
            }
        }
    }
    return ;
}

int main()
{
    init(1000000);
    cin >> n >> m;
    
    bool v = 0;
    for(int i = n; i <= m; i++)
    {
        if(vis[i] == 1) 
        {
            continue;
        }
        
        int x = i, a = 0;
        while(x > 0)
        {
            int ge = x % 10;
            a = a*10 + ge;
            x /= 10;
        }
        if(vis[a] == 0)
        {
            if(v == 1)
            {
                cout<<',';
            }
            cout<<i;
            v = 1;
        }
    }
    
    if(v == 0)
        cout<<"No";
    return 0;
}