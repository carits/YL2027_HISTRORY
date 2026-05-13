#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a,b,c,d;
signed main() 
{
	freopen("leg.in", "r", stdin);
  	freopen("leg.out", "w", stdout);
	cin>>n>>m>>a>>b>>c>>d;
	if(a==c && b==d)
	{
		cout<<n*a+m*b<<endl;
	}
	else if(a==b && c==d)
	{
		if((n+m)%2==1)
		{
			cout<<(n+m)/2*c+((n+m)-(n+m)/2)*a<<endl;
		}	
	}
	else
	{
		int sum=0;
		for(int i=0;i<n;++i)
		{
			if(i%2==0)
			{
				sum+=a;
			}
			else
			{
				sum+=c;
			}
		}
		for(int i=0;i<m;++i)
		{
			if(i%2==0)
			{
				sum+=b;
			}
			else
			{
				sum+=d;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
