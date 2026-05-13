#include <bits/stdc++.h>
using namespace std;
#define int long long 
map<int,int>op;
signed main()
{
	int n;
	cin>>n;
	for(int i=1;i*i*i<=n;++i)
	{
		if((i+1)*(i+1)*(i+1)>n)
		{
			cout<<i;
			return 0;
		}
	} 
	return 0;
}