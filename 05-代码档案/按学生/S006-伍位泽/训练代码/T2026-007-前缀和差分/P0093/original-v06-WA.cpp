#include <bits/stdc++.h>
using namespace std;
int a[1000005] , b[1000005];
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n , maxn=0;
  char m;
  cin >> n; 
  for (int i=1;i<=n;i++)
  {
  	cin >> m;
  	if (m=='0')
  	{
	    a[i]=a[i-1]+1;
	    b[i]=b[i-1];
	}
	else
	{
		a[i]=a[i-1];
		b[i]=b[i-1]+1;
	}
  } 
  for (int i=n,j=1;i>=1;i--,j++)
  {
  	if (a[i]-a[j-1]==b[i]-b[i-1])
  	{
  		maxn=max (maxn , i-j+1);
  		break;
  	}
  }
  cout << maxn;
  return 0;
}