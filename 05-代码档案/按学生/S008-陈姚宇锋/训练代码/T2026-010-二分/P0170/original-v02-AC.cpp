#include <bits/stdc++.h> 
using namespace std;
#define int long long
int a[1000009];
int n,m;
map<int,int>op;
int b[1000009];
signed main()
{
	
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;++i)
	{
		cin>>b[i];
		op[b[i]]++;
	}
	int cnt=0;
	for(int i=1;i<=n;++i)
	{
		if(op[a[i]])
		{
			cout<<a[i]<<' ';
			cnt++;
		}
	}
	return 0;
}