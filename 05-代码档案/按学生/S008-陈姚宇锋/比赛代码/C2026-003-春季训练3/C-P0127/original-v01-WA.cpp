#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1000009];
signed main()
{
	int t;
    cin>>t;
	while(t--) 
	{
	   int n;
	   cin>>n;
	   int c=0;
	   for(int i=1;i<=n;++i)
	   {
	       cin>>a[i];
	       c=abs(c+a[i]);
	   }
	   cout<<c<<endl;
	}
	return 0;
}