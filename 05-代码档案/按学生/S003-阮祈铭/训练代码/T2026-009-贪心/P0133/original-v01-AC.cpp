#include<bits/stdc++.h>
using namespace std;
int t,n,a[200],k,x;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		bool f=true;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			if(x==k)
			{
				f=false;
			}
		}
		if(f)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
	return 0;
}