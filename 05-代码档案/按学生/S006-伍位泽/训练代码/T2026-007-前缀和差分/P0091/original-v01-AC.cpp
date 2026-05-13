#include <bits/stdc++.h>
using namespace std;
int a[100005];
long long v[100005] , w[100005];
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n , m , s , t;
  cin >> n >> m;
  for (int i=1;i<=n;i++)
  {
  	cin >> a[i];
  }
  for (int i=2;i<=n;i++)
  {
  	if (a[i]>=a[i-1])
  	{
  		v[i]=v[i-1];
  	}
  	else
  	{
  		v[i]=v[i-1]+a[i-1]-a[i];
  	}
  }
  for (int i=n-1;i>=1;i--)
  {
  	if (a[i]>=a[i+1])
  	{
  		w[i]=w[i+1];
  	}
  	else
  	{
  		w[i]=w[i+1]+a[i+1]-a[i];
  	}
  }
  while (m--)
  {
  	cin >> s >> t;
  	if (s<=t)
  	{
  		cout << v[t]-v[s] << "\n";
  	}
  	else
  	{
  		cout << w[t]-w[s] << "\n";
  	}
  }
  return 0;
}