#include <bits/stdc++.h>
using namespace std;
bool a[10005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l , m;
    cin >> l >> m;
    int u , v , cnt=0;
    while (m--)
    {
        cin >> u >> v;
        for (int i=u;i<=v;i++)
        {
            a[i]=1;
        }
    }
    for (int i=0;i<=l;i++)
    {
        if (a[i]==0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}