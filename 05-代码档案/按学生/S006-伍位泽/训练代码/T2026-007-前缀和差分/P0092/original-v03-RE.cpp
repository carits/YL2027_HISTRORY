#include <bits/stdc++.h>
using namespace std;
int a[100005];
long long v[100005];
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n , k;
  long long minn=1e18;
  cin >> n >> k;
  for (int i=1;i<=n;i++)
  {
  	cin >> a[i];
  	v[i]=v[i-1]+a[i];
  }
  for (int i=1;i<=n-k+1;i++)
  {
  	minn=min (minn , v[i+k-1]-v[i]); 
  }
  for (int i=1;i<=n-k+1;i++) 
  {
  	if (v[i+k-1]-v[i]==minn)
	{
		cout << i;
		return 0;  	
	} 
  }
  return 0;
}