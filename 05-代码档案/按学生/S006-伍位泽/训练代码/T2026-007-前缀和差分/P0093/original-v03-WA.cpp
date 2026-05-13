#include <bits/stdc++.h>
using namespace std;
int a[1000005] , b[1000005];
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
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
  for (int i=n;i>=1;i--)
  {
  	for (int j=1;j<=i;j++)
  	{
  		if (a[i]-a[j-1]==b[i]-b[j-1])
  		{
  			cout << i-j+1;
  			return 0;
  		}
  	}
  }
  cout << 0;
  return 0;
}