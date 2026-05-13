#include <bits/stdc++.h>
using namespace std;
int n;
bool sf (int p)
{
  if (p==1||p==2) return 0;
  int t=p-9;
  int pos=9+t/10*19+(t-(t/10)*10)*2;
  if (pos>=n) return 1;
  return 0;
}
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	if (n<=9)
	{
  	if (n==1)
  	{
  	  cout << 1;
    }
    else if (n<=6)
    {
      cout << n+1;
    }
    else
    {
      cout << n;
    }
    return 0;
  }
	int l=10 , r=60;
	while (l<r)
	{
	  int mid=(l+r)/2;
	  if (sf (mid)==1)
	  {
	    r=mid;
    }
    else
    {
      l=mid+1;
    }
  }
	cout << l;
	return 0;
}