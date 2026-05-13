#include<bits/stdc++.h>

using namespace std;

int n, s, a, b;

struct Node
{
    int x, y;
}c[5005];

bool cmp(const Node &s1, const Node &s2)
{
    return s1.y < s2.y;
}

int main()
{
    cin >> n >> s;
    cin >> a >> b;
    for(int  i = 1; i <= n; i++)
    {
        cin >> c[i].x >> c[i].y;
    }
    sort(c + 1, c + 1 + n, cmp);
    
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a + b < c[i].x) 
        {
            continue;
        }
        if(s >= c[i].y)
        {
            ans++;
        }
        else
        {
            break;
        }
        s -= c[i].y;
    }
    
    cout << ans;
    return 0;
}