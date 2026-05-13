#include <bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7;
int dis[100005];
int a[100005] , b[100005];
int t;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    dis[0]=1;
    for (int i=1;i<=100000;i++)
    {
        dis[i]=dis[i-1]*2%MOD;
    }
    cin >> t;
    for (int i=1;i<=t;i++)
    {
        cin >> a[i];
    }
    for (int i=1;i<=t;i++)
    {
        cin >> b[i];
        cout << dis[b[i]] << "\n";
    }
    return 0;
}