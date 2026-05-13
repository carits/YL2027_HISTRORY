#include <bits/stdc++.h>
using namespace std;
map <int , bool> mp;
int a[100005];
int n , m , v;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for (int i=1;i<=m;i++)
    {
        cin >> v;
        mp[v]=1;
    }
    for (int i=1;i<=n;i++)
    {
        if (mp.count (a[i]))
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}