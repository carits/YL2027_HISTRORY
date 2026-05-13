#include<bits/stdc++.h>
using namespace std;
unsigned long long n,x,y,a1,a2,ansl,ans,a[100010]={1};
int main()
{
	freopen("calculate.in","r",stdin);
	freopen("calculate.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]=a[i-1]*a[i];
	}
	cin>>x>>y;
	long long i=0,cnt=1;
	while(x>0)
	{
		a1+=a[i]*(x%10);
		x/=10;
		i++;
	}
	i=0,cnt=1;
	while(y>0)
	{
		a2+=a[i]*(y%10);
		y/=10;
		i++;
	}
	ansl=a1*a2;
	i=n;
	while(a[i]>ansl)
	{
		i--;
	}
	while(i>=0)
	{
		ans=ans*10+ansl/a[i];
		ansl%=a[i]; 
		i--;
	} 
	cout<<ans<<endl;
	return 0;
}
