#include <bits/stdc++.h>
using namespace std ;
int dp[1000009];
int t;
long long n;
int main()
{
    for(long long k=2;k<=1000000;k++)
    {
        long long sum = 0 , num = 1 , cnt = -1 ;
        while(sum <= 1000000)
        {
            cnt ++ ;
            sum += num;
            num*=k;
            if(cnt >= 2 && sum <= 1000000) 
            {
				dp[sum] = 1 ;
            }
        }
    }
    cin >> t ;
    while(t --)
    {
        cin >> n ;
        if(dp[n]) 
		{
			cout << "YES\n" ;
		}
        else 
		{
			cout << "NO\n" ;
		}
    }
    return 0 ;
}