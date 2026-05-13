#include<bits/stdc++.h>

using namespace std;

int n, m;

struct Node
{
    int c[15];
}a[10005];

bool cmp(const Node &s1, const Node &s2)
{
    for(int i = 1; i <= m; i++)
    {
        if(s1.c[i] == s2.c[i])
        {
            continue;
        }
        return s1.c[i] > s2.c[i];
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i].c[j];
        }
    }
    
    sort(a + 1, a + 1 + n, cmp);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << a[i].c[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}