#include<bits/stdc++.h>
using namespace std;
long long t,n;
map<long long,bool> mp;
int main ()
{
	for(long long i=1;i<=10000;i++)
	{
		mp[i*i*i]=true;
	}
	cin >> t;
	while(t--)
	{
		bool f=true;
		cin>>n;
		for(long long i=1;i<=10000;i++)
		{
			if(mp[n-i*i*i])
			{
				f=false;
				cout<<"YES\n";
				break;
			}
		}
		if(f)
		{
			cout<<"NO\n";
		}
	}
	return 0;
}