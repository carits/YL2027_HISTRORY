#include <bits/stdc++.h>
using namespace std;
string a , b , s;
int v[100005];
long long x=0 , y=0 , z;
int n;
int main ( ) 
{
  freopen("calculate.in", "r", stdin);
  freopen("calculate.out", "w", stdout);
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  v[0]=1;
  for (int i=1;i<=n;i++)
  {
  	cin >> v[i];
  }
  cin >> a >> b;
  int aa=a.size ( )-1 , bb=b.size ( )-1;
  for (int i=aa;i>=0;i--)
  {
  	x=(x+a[0]-'0')*v[i];
  	a=a.substr (1 , a.size ( )-1);
  }
  for (int i=bb;i>=0;i--)
  {
  	y=(y+b[0]-'0')*v[i];
  	b=b.substr (1 , b.size ( )-1);
  }
  z=x*y;
  for (int i=1;i<=n;i++)
  {
  	if (z==0)
  	{
  		break;
	  }
	  s=char (z%v[i]+'0')+s;
	  z/=v[i];
  }
  cout << s;
  return 0;
}
