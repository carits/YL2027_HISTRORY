#include<bits/stdc++.h>
using namespace std;
long long n,m,a,b,c,d;
int main()
{
	freopen("leg.in","r",stdin);
	freopen("leg.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m>>a>>b>>c>>d;
	if(a==c && b==d)
	{
		cout<<n*a+m*b<<endl;
	}
	else if(a==b && c==d)
	{
		if((m+n)%2==0)
		{
			cout<<(m+n)/2*a+(m+n)/2*c<<endl;
		}
		else
		{
			cout<<(m+n)/2*a+((m+n)/2+1)*c<<endl;
		}
	}
	/*if(a<=c && b>=d)
	{
		if(n>m)
		{
			cout<<min(n,m)*a + min(n,m)*d + ((n-m)%2==0) ? (n-m)/2*a+(n-m)/2*c : (n-m)/2*a+((n-m)/2+1)*c;
		}
		else
		{
			cout<<min(n,m)*a + min(n,m)*d + ((m-n)%2==0) ? (m-n)/2*b+(m-n)/2*d : (n-m)/2*b+((n-m)/2+1)*d;
		}
	}
	else if(a>=c && b<=d)
	{
		if(n>m)
		{
			cout<<min(n,m)*c + min(n,m)*b + ((n-m)%2==0) ? (n-m)/2*a+(n-m)/2*c : (n-m)/2*a+((n-m)/2+1)*c;
		}
		else
		{
			cout<<min(n,m)*c + min(n,m)*b + ((m-n)%2==0) ? (m-n)/2*b+(m-n)/2*d : (n-m)/2*b+((n-m)/2+1)*d;
		}
	}*/
	return 0;
}
