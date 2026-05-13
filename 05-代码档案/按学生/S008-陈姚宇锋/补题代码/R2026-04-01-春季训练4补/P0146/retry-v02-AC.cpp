#include<bits/stdc++.h>
using namespace std;
#define int long long 
int t,n,a[100009];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
	}
	if(n==1)
	{
		cout<<0<<endl;
		return ;
	}
	cout<<n-1<<endl;
	cout<<1<<' '<<n<<endl;
	if((a[1]+a[n])%2==0) 
	{
		a[1]=a[n];
	}
	else 
	{
		a[n]=a[1];
	}
	for(int i=2;i<n;i++)
	{
		if((a[1]+a[i])%2==0) 
		{
			cout<<i<<' '<<n<<endl;
		}
		else 
		{
			cout<<1<<' '<<i<<endl;
		}
	}
}
signed main()
{
	cin>>t;
	while(t--) 
	{
		solve();
	}
    return 0;
}