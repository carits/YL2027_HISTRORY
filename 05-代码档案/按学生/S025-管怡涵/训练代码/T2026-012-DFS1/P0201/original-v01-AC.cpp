#include <bits/stdc++.h>
using namespace std ;
int x , cnt ;
int a[25] , b[25] , s[25] ;
bool f[25] ;
void dfs(int step)
{
	if(step > x)
	{
		cnt++ ;
		return ;
	}
	if(f[a[step]] == false)
	{
		f[a[step]] = true ;
		s[step] = a[step] ;
		dfs(step + 1) ;
		f[a[step]] = false ;
	}
	if(f[b[step]] == false)
	{
		f[b[step]] = true ;
		s[step] = b[step] ;
		dfs(step + 1) ;
		f[b[step]] = false ;
	}
}
int main() 
{
	cin >> x ;
	for(int i = 1 ;i <= x ;i++)
	{
		cin >> a[i] >> b[i] ;
	}
	dfs(1) ;
	cout << cnt ;
return 0 ;
}