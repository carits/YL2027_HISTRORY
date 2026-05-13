#include <bits/stdc++.h>
using namespace std;
long long t , n , a[200009] , f[200009];
int main() 
{
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;
	cout.tie(0) ; 
	while(t--)
    {
		cin >> n ;
        long long ans = 0 ;
		for (int i = 1; i <= n; i++) 
		{
            cin >> a[i] ;
            f[a[i]] = i ;
    	}
        sort(a + 1 , a + n + 1) ;
        for(int i = 1 ; i <= n ; i ++)
        {
        	for(int j = i + 1 ; j <= n ; j ++)
        	{
        		if(a[i] * a[j] > 2 * n) 
				{
					break;
				}
        		if(a[i] * a[j] == f[a[i]] + f[a[j]]) 
				{
					ans++;
				}
        	}
        }
        cout<<ans<<"\n"; 
	}
    return 0;
}