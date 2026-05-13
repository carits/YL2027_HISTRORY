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
		int flag=0;
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=n;++i)
		{
			int x;
			cin>>x;
			if(x==k)
			{
				flag=1;
			} 
		}
		if(flag==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}