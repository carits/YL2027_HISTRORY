#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n , a , b;
    cin >> t;
    while (t--)
    {
        int cnt=0;
        cin >> n;
        while (n--)
        {
            cin >> a >> b;
            if (a>b)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}