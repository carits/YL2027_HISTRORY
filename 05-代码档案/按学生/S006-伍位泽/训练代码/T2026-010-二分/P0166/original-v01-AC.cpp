#include <bits/stdc++.h>
using namespace std;
long long a[200005];
long long v , s;
int n , m;
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i=1;i<=n;i++)
	{
	  cin >> v;
	  a[i]=a[i-1]+v;
  }
  while (m--)
  {
    cin >> s;
    int pos=lower_bound (a+1 , a+n+1 , s)-a;
    cout << pos << " " << s-a[pos-1] << "\n";
  }
	return 0;
}