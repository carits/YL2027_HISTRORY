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
        int k=0 , c=0 , sum=0;
        cin >> n;
        while (n--)
        {
            cin >> v;
            if (v>=0)
            {
                c=max (c , abs (k+sum))+v;
                sum=0;
                k=c;
            }
            else
            {
                c=abs (c+v);
                sum+=v;
            }
        }
        if (sum!=0)
        {
            c=max (c , abs (k+sum));    
        } 
        cout << c << "\n";
    }
    return 0;
}