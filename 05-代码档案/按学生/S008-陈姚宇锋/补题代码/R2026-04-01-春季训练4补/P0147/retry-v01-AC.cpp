#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[2000009];
int work1(int x)
{
	while(x%10!=2) 
	{
		x+=x%10;
	}
	return x;
}
int work2(int x)
{
	while(x%10!=0) 
	{
		x+=x%10;
	}
	return x;
}
void solve()
{
	int n;
	bool flag = 0;
	cin>>n;
	int cnt = 0;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(a[i]%5==0) 
		{
			cnt++;
		}
	}
	if(cnt!=0 && cnt!=n)
	{
		cout<<"NO\n";
		return ;
	}
	else 
	{
		flag=cnt;
	}
	for(int i=1;i<=n;++i)
	{
		if(flag) 
		{
			a[i]=work2(a[i]);
		}
		else 
		{
			a[i]=work1(a[i])%20;
		}
		if(a[i]!=a[i-1] && i!=1)
		{
			cout<<"NO\n";
			return ;
		}
	}
	cout<<"YES\n";
}
signed main()
{
	int t;
	cin>>t;
	while(t--) 
	{
		solve();
	}
	return 0;
}