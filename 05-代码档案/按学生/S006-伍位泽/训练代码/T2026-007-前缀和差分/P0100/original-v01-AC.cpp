#include <bits/stdc++.h>
using namespace std;
int a[5000005] , v[5000005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , p , x , y , z , minn=1e9;
    cin >> n >> p;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    while (p--)
    {
        cin >> x >> y >> z;
        v[x]+=z;
        v[y+1]-=z;
    }
    for (int i=1;i<=n;i++)
    {
        v[i]+=v[i-1];
        minn=min (minn , a[i]+v[i]);
    }
    cout << minn;
    return 0;
}