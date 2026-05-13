#include <bits/stdc++.h>
using namespace std;
struct node1
{
    long long w;
    bool operator < (const node1 &a) const
    {
        return w>a.w;
    }
}; 
struct node2
{
    long long w;
    bool operator < (const node2 &a) const
    {
        return w<a.w;
    }
}; 
multiset <node1> s;
multiset <node2> t;
long long v[50005];
int n , m , a , b;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        s.insert ({0});
        t.insert ({0});
    }
    while (m--)
    {
        cin >> a >> b;
        s.erase (s.find ({v[a]}));
        t.erase (t.find ({v[a]})); 
        v[a]+=b;
        s.insert ({v[a]});
        t.insert ({v[a]});
        long long x , y;
        for (auto i:s)
        {
            x=i.w;
            break;
        }
        for (auto i:t)
        {
            y=i.w;
            break;
        }
        cout << x-y << " ";
    }
    return 0;
}