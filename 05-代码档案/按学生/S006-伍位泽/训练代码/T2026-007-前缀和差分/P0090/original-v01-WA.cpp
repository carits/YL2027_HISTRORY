#include <bits/stdc++.h>
using namespace std;
string s;
int v[100005];
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n , q , l , r;
  cin >> n >> q >> s;
  s=" "+s;
  for (int i=1;i<=n;i++)
  {
  	if (s[i]=='a')
  	{
  		v[i]=v[i-1]+1;
  	}
  	else if (s[i]=='b')
  	{
  		v[i]=v[i-1]+2;
  	}
  	else
  	{
  		v[i]=v[i-1]+3;
  	}
  }
  while (q--)
  {
  	cin >> l >> r;
  	cout << v[r]-v[l-1] << "\n";
  }
  return 0;
}