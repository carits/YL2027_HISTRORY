#include <bits/stdc++.h>
#define int long long
using namespace std;
int t , n , k ;
int c[55][55] ;
void solve()
{
    cin >> n >> k ;
    int d = 0 , tmp = n ;
    while (tmp > 1)
    {
        tmp >>= 1 ;
        d ++ ;
    }
    int ans = 0;
    for(int i = 1 ; i <= d - 1 ; i ++)
    {
        for(int j = 0 ; j <= i ; j ++)
        {
            if(i + j + 1 > k)
            {
                ans += c[i][j] ;
            }
        }
    }
    if(d + 1 > k)
    {
        ans ++ ;
    }
    cout << ans << "\n" ;
}
signed main()
{
    for(int i = 0 ; i <= 50 ; i ++)
    {
        c[i][0] = 1 ;
        c[i][i] = 1 ;
        for(int j = 1 ; j < i ; j ++)
        {
            c[i][j] = c[i - 1][j] + c[i - 1][j - 1] ;
        }
    }
    cin >> t ;
    while(t --)
    {
        solve() ;
    }
    return 0 ;
}