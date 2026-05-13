#include <bits/stdc++.h>
using namespace std;
int n , m , a , b , c , d;
long long minn=1e18;
void dfs (int x , int y , long long sum)
{
	if (x>n||y>m) return;
	if (x==n&&y==m)
	{
		minn=min (minn , sum);
		return;
	}
	if ((x+y)%2==0)
	{
		dfs (x+1 , y , sum+b);
		dfs (x , y+1 , sum+a);
	}
	else
	{
		dfs (x+1 , y , sum+d);
		dfs (x , y+1 , sum+c);
	}
}
int main ( ) 
{
	freopen("leg.in", "r", stdin);
  freopen("leg.out", "w", stdout);
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m >> a >> b >> c >> d;
  if (a==c&&b==d)
  {
  	cout << n*a+m*b;
  	return 0;
  }
  if (m==0)
  {
  	if (n%2==0)
  	{
  		cout << (a+c)*n/2;
	}
	else
	{
		cout << a*(n/2+1)+c*(n/2);
	}
  } 
  else if (n==0)
  {
  	if (m%2==0)
  	{
  		cout << (b+d)*n/2;
	}
	else
	{
		cout << b*(n/2+1)+d*(n/2);
	}
  }
  else
  {
  	swap (n , m);
  	dfs (0 , 0 , 0);
  	cout << minn;
  }
  return 0;
}
