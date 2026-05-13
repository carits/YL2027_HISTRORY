#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n , v;
    cin >> t;
    while (t--)
    {
        int c=0 , sum=0;
        cin >> n;
        while (n--)
        {
            cin >> v;
            c=max (c , abs (sum))+v;
            sum+=v;
        }
        if (sum!=0)
        {
            c=max (c , abs (sum));    
        } 
        cout << c << "\n";
    }
    return 0;
}