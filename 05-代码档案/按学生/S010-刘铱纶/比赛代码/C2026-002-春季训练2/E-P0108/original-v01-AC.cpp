#include<bits/stdc++.h>

using namespace std;

int t, n;
bool vis[1000005];

void zhb()
{
    int last, p;
    for(int i = 2; i <= 1005; i++)
    {
        last = i, p = i + 1;
        while(1)
        {
            last = last * i;
            p = p + last;
            
            if(p > 1e6)
            {
                break;
            }
            vis[p] = 1;
        }
    }
    
    return ;
}

void solve()
{
    cin >> n;
    if(vis[n] == 1)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n"; 
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    zhb();
    
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}