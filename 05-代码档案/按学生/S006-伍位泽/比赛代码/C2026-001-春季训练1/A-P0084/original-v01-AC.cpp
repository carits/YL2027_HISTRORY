#include <bits/stdc++.h>
using namespace std;
int a[15];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x , n , cnt=0 , maxn=0;
    cin >> x;
    while (x--)
    {
        cin >> n;
        cnt=0 , maxn=0;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
            maxn=max (maxn , a[i]);
        }
        for (int i=1;i<=n;i++)
        {
            if (a[i]==maxn)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}