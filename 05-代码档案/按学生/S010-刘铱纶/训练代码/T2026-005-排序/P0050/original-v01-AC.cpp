#include<bits/stdc++.h>

using namespace std;

int n, m;

struct Node
{
    int id, zhi;
}a[5005];

bool cmp(const Node &s1, const Node &s2)
{
    if(s1.zhi == s2.zhi)
    {
        return s1.id < s2.id;
    }
    return s1.zhi > s2.zhi;
}

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].id >> a[i].zhi;
    } 
    sort(a + 1, a + 1 + n, cmp);
    
    m*=1.5;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i].zhi >= a[m].zhi)
        {
            cnt++;
        } 
    }
    cout << a[m].zhi << " " << cnt << "\n";
    for(int i = 1; i <= cnt; i++)
    {
        cout << a[i].id << " " << a[i].zhi << "\n";
    }
    return 0;
}