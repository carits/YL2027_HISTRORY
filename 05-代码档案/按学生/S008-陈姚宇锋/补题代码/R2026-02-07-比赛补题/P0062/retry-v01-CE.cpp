#include <bits/stdc++.h>
using namespace std ;
long long t , n , d[305] ;
unordered_set<long long> s; 
int main()
{
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;
	cout.tie(0) ;
	cin >> t ;
	while(t --)
	{
		cin >> n ;
		s.clear() ; 
		for(int i = 1 ; i <= n ; i ++)
		{
			cin >> d[i] ;
			s.insert(d[i]) ; 
		}
		sort(d + 1 , d + n + 1) ;
		long long x = d[1] * d[n] ;
		bool flag = true ;
		for(int i = 1 ; i <= n ; i ++)
		{
			if(x % d[i] != 0)
			{
				cout << "-1\n" ;
				flag = false ;
				break ;
			}
		}
		if(!flag) continue ;
		int cnt = 0 ; 
		for(long long i = 2 ; i * i <= x ; i ++) 
		{
			if(x % i != 0) continue ;
			if(s.find(i) == s.end())
			{
				flag = false ;
				break ;
			}
			cnt++ ;
			if(i != x / i)
			{
				if(s.find(x / i) == s.end())
				{
					flag = false ;
					break ;
				}
				factor_cnt ++ ;
			}
		}
		if(flag && cnt == n)
		{
			cout << x << "\n" ;
		}
		else
		{
			cout << "-1\n" ;
		}
	}
    return 0 ;
} = 0 ; 
		for(long long i = 2 ; i * i <= x ; i ++) 
		{
			if(x % i != 0) continue ;
			if(s.find(i) == s.end())
			{
				flag = false ;
				break ;
			}
			factor_cnt ++ ;
			if(i != x / i)
			{
				if(s.find(x / i) == s.end())
				{
					flag = false ;
					break ;
				}
				factor_cnt ++ ;
			}
		}
		if(flag && factor_cnt == n)
		{
			cout << x << "\n" ;
		}
		else
		{
			cout << "-1\n" ;
		}
	}
    return 0 ;
}