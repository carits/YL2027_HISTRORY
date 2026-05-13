#include <bits/stdc++.h>
using namespace std;
#define int  long long
int a,b,p;
int check(int a,int x)
{
	int ret=1;
	while(x)
	{
		if(x&1)
		{
			ret=ret*a;
			ret%=p;
		}
		a*=a;
		a%=p;
		x>>=1;
	}
	return ret;
}
signed main()
{
	cin>>a>>b>>p;
	cout<<a<<'^'<<b<<" mod "<<p<<'='<<check(a,b);
	return 0;	
}