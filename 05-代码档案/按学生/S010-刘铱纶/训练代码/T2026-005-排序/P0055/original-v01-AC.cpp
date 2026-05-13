#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, m, a[10005][105];

struct Node
{
    int zhi,id;
}b[10005];

bool cmp(const Node &s1, const Node &s2)
{
    return s1.zhi > s2.zhi; 
}

signed main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            b[j].zhi = a[j][i];
            b[j].id = j;
        }
        sort(b + 1, b + 1 + n, cmp);
        for(int j = 1; j <= n; j++)
        {
            cout << b[j].id << " ";
        }
        cout << "\n";
    }  
    return 0;
}
