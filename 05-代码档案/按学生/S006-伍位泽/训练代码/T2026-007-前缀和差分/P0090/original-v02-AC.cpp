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
  	v[i]=v[i-1]+s[i]-'a'+1;
  }
  while (q--)
  {
  	cin >> l >> r;
  	cout << v[r]-v[l-1] << "\n";
  }
  return 0;
}