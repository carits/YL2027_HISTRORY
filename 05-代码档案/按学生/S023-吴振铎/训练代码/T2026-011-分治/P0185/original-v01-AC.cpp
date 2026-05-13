#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
long long kuis(long long x,long long m)
{
	if(m==0)return 1;
	long long t=kuis(x,m/2);
	t=(t%c*t%c)%c;
	if(m%2==1)t=(t%c*x%c)%c;
	return t;
}
int main()
{
	cin>>a>>b>>c;
	cout<<a<<"^"<<b<<" mod "<<c<<"="<<kuis(a,b); 
	return 0;
} 