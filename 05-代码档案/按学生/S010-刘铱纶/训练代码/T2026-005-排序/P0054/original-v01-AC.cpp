#include<bits/stdc++.h>

using namespace std;

int n, vis[100005];

struct Node
{
    int zhi, id;
}a[100005];

bool cmp(const Node &s1, const Node &s2)
{
    return s1.zhi < s2.zhi;
}
int main()
{
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].zhi;
        a[i].id = i;
    }
    
    sort(a + 1, a + 1 + n, cmp);
    
    for(int i = 1; i <= n; i++)
    {
        vis[a[i].id] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        cout << vis[i] << " ";
    }
    return 0;
}