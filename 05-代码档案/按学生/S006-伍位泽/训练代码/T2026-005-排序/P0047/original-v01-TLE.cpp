#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , cnt=0;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (a[i]>a[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}