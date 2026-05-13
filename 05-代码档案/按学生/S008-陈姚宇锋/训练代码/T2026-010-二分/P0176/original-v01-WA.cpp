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
		if(i*i*i==n)
		{
			cout<<i<<endl;
			return 0;
		}
	} 
	return 0;
}