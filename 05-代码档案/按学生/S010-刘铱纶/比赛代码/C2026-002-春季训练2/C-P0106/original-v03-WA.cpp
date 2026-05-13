#include<bits/stdc++.h>

using namespace std;

int t, n, m, h;

struct Node
{
    int x, f, id;
}b[200005];

bool cmp(Node s1, Node s2)
{
    if(s1.x == s2.x)
    {
        return s1.f < s2.f;
    } 
    return s1.x > s2.x;
}

void solve()
{
    cin >> n >> m >> h;
    
    const int N = n + 5, M = m + 5;
    int a[M];
    
    memset(a, 0, sizeof a);
    
    for(int i = 1; i <= n; i++)
    {
        b[i].id = i;
        for(int j = 1; j <= m; j++)
        {
            cin >> a[j];
        }
        
        sort(a, a + 1 + m);
        
        int sum = 0, time = 0, c = 0, h1 = h;
        for(int j = 1; j <= m; j++)
        {
            if(h1 >= time + a[j])
            {
                time += a[j];
                sum += time;
                c++; 
            } 
        }
        
        b[i].x = c, b[i].f = sum;
    }
    
    sort(b + 1, b + 1 + n, cmp);
    
    for(int i = 1; i <= n; i++)
    {
        if(b[i].id == 1)
        {
            cout << i << "\n";
        }
    }
    
    for(int i = 1; i <= n; i++)
    {
        b[i].x = 0, b[i].f = 0, b[i].id = 0;
     }
}

int main()
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