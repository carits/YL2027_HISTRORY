#include <bits/stdc++.h>
using namespace std;
int q , a , b , c;
bool sf (int p)
{
  if (a>=p&&b>=p&&a+b+c-p*2>=p) return 1;
  return 0;
}
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> q;
	while (q--)
	{
	  cin >> a >> b >> c;
	  if (a==0||b==0||a+b+c<3)
	  {
	    cout << 0 << "\n";
	    continue;
    }
	  int l=1 , r=1e8;
	  while (l<r)
	  {
	    int mid=(l+r+1)/2;
	    if (sf (mid)==1)
	    {
	      l=mid;
      }
      else
      {
        r=mid-1;
      }
    }
	  cout << l << "\n";
  }
	return 0;
}