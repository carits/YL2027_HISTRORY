#include <bits/stdc++.h>
using namespace std;
int a[200005];
int n , maxn=0 , cnt=0;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        if (a[i]<=a[i-1]*2)
        {
            cnt++;
        }
        else
        {
            maxn=max (maxn , cnt);
            cnt=1;
        }
    }
    maxn=max (maxn , cnt);
    cout << maxn ;
    return 0;
}