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
		int a,b,c;
		cin>>a>>b>>c;
		a*=2;
		b*=2;
		c*=2;
		if(a>b)
		{
			swap(a,b);
		}
		cout<<((b-a)/2+c-1)/c<<endl;
	}
	return 0;
}