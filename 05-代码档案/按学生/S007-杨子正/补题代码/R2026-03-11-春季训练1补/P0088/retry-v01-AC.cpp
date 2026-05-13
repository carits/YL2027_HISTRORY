#include <bits/stdc++.h>
#define int long long
using namespace std ;
const int N = 1e5 + 10 ;
int n , a[N] , minn[N] ;
void solve() 
{
	cin >> n ;
	bool s = true ;
	for (int i = 1 ; i <= n ; i ++) 
    {
		cin >> a[i] ;
		minn[i] = 1 ;
		for (int j = 2 ; j * j <= a[i] ; j ++)
			if (a[i] % j == 0) 
            {
				minn[i] = j ;
				break ;
			}
		if (minn[i] == 1) minn[i] = a[i] ;
		if (i > 1 && a[i - 1] > a[i]) 
            s = false ;
	}
	if (s) 
    {
		cout << "Bob\n" ;
		return ;
	}
	for (int i = 1 ; i <= n ; i ++) 
    {
		if (a[i] == 1) 
            continue ;
		int tmp = a[i] ;
		while (tmp % minn[i] == 0) 
            tmp /= minn[i] ;
		if (tmp > 1) 
        {
			cout << "Alice\n" ;
			return ;
		}
	}
	s = true ;
	for (int i = 1 ; i <= n ; i ++) 
		if (i > 1 && minn[i - 1] > minn[i]) 
            s = false ;
	if (s) 
        cout << "Bob\n" ;
	else 
        cout << "Alice\n" ;
}

signed main() 
{
	int T ;
    cin >> T ;
	while (T--) 
        solve() ;
	return 0 ;
}