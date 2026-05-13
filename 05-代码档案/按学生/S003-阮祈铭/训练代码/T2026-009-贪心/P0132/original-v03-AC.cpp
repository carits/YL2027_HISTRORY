#include<bits/stdc++.h>
using namespace std;
int t,n,a[210],sum=0;
int main()
{
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		for(int i=1;i<=n*2;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+n*2+1);
		for(int i=2;i<=n;i++)
		{
			sum+=a[i]-a[i-1];
		}
		for(int i=n+2;i<=n*2;i++)
		{
			sum+=a[i]-a[i-1];
		}
		cout<<sum<<endl;
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<' '<<a[i+n]<<endl;
		} 
	}
	return 0;
}