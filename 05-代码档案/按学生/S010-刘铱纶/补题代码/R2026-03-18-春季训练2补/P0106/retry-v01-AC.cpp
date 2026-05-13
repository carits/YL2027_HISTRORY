#include<bits/stdc++.h>

#define int long long 

using namespace std;
//
int t, n, m, h;

struct Node
{
    int x, f, id;
}b[200005];

bool cmp(Node s1, Node s2)
{
    if(s1.x == s2.x)
    {
        if(s1.f == s2.f)
        {
            return s1.id < s2.id;
        }
        return s1.f < s2.f;
    } 
    return s1.x > s2.x;
}

void solve()
{
    cin >> n >> m >> h;
    
    const int N = n + 5, M = m + 5;
    int a[N][M];
    
    memset(a, 0, sizeof a);
    for(int i = 1; i <= n; i++)
    {
        b[i].x = 0, b[i].f = 0;
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        } 
    } 
    
    for(int i = 1; i <= n; i++)
    {
        b[i].id = i;
        sort(a[i] + 1, a[i] + 1 + m);
        
        int cnt = 0;
        for(int j = 1; j <= m; j++)
        {
         
            if(h >= cnt + a[i][j])
            {
                b[i].x++;
                cnt += a[i][j];
                b[i].f += cnt;
            }
            else
            {
                break;
            }
        }
    }
    
    sort(b + 1, b + 1 + n, cmp);
    
    for(int i = 1; i <= n; i++)
    {
        if(b[i].id == 1)
        {
            cout << i << "\n";
        }
    }
    
    return ;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}