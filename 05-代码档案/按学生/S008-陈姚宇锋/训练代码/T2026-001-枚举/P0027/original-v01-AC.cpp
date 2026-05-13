#include <bits/stdc++.h>
using namespace std ;
long long t , n , a[150005] , maxn , sum[150005] ;
int main()
{
    ios::sync_with_stdio(0) ;
    cin.tie(0) ;
    cout.tie(0) ;
    cin >> t ;
    while(t --)
    {
        maxn = 0 ;
        cin >> n ;
        for(int i = 1 ; i <= n ; i ++)
        {
            cin >> a[i] ;
            sum[i] = sum[i - 1] + a[i] ;
        }
        for(int k = 1 ; k <= n ; k ++)
        {
            if(n % k != 0) continue ;
            if(n == k)
            {
                maxn = max(maxn , 0LL) ;
                continue ;
            }
            long long maxk = 0 , mink = 8e18 ;
            for(int i = 1 ; i <= n / k ; i ++)
            {
                maxk = max(maxk , sum[i * k] - sum[(i - 1) * k]) ;
                mink = min(mink , sum[i * k] - sum[(i - 1) * k]) ;
            }
            maxn = max(maxn , maxk - mink) ;
        }
        cout << maxn << "\n" ; 
    }
    return 0 ;
}