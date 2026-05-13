#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100005] , b[100005];
long long sum=0;
int n , k;
bool sf (int p)
{
  long long sum=0; 
  for (int i=1;i<=n;i++)
  {
    b[i]=a[i]+p*i;
  }
  sort (b+1 , b+n+1);
  for (int i=1;i<=p;i++)
  {
    sum+=b[i];
  }
  if (sum<=k) return 1;
  return 0;
}
signed main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	for (int i=1;i<=n;i++)
	{
	  cin >> a[i];
  }
  int l=0 , r=n;
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
  cout << l << " ";
  for (int i=1;i<=n;i++)
  {
    b[i]=a[i]+l*i;
  }
  sort (b+1 , b+n+1);
  for (int i=1;i<=l;i++)
  {
    sum+=b[i];
  }
  cout << sum << " ";
	return 0;
}