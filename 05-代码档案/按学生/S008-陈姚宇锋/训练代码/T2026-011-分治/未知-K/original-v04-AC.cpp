#include <bits/stdc++.h>
using namespace std;
#define int long long 
string s ;
int q,t,k,a[1000009] ;
int check(int x, int y)
{
    if(x == 0) 
	{
		return a[y];
	}
    if(y == 1)
    {
        return (a[1] + x) % 3;
    }
    return (check(x - 1 , (y + 1) / 2) + 2 - y % 2) % 3;
}
signed main()
{
    cin >> s >> q ;
    for(int i=1;i<=s.size() ; i ++)
    {
        a[i]=s[i - 1] - 'A' ;
    }
    while(q --)
    {
        cin >> t >> k ;
        cout << char(check(t , k) + 'A') << "\n" ;
    }
    return 0;
}