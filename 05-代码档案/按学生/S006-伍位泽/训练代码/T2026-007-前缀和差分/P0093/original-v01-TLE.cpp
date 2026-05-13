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
  for (int i=1;i<=n;i++)
  {
  	for (int j=i+1;j<=n;j+=2)
  	{
  		if (a[j]-a[i-1]==b[j]-b[i-1])
  		{
  			maxn=max (maxn , j-i+1);
  		}
  	}
  }
  cout << maxn;
  return 0;
}