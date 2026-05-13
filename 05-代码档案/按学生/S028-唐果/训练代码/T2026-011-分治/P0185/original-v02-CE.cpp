#include<bits/stdc++.h>
using namespace std;
long long a,b,p,ans=1; 
long long f(long long a,long long b,long long p)
{
	if(b<0)
	{
		return 1;
	}
	int t=f(a,b/2);
	int ans=1;
	if(b%2==0)
	{
		ans=t*t%p;
	}
	else
	{
		ans=a%p*t%p*t%p;
	}
	return ans;
}

int main(){
	cin >> a >> b >> p;
	int res=f(a,b,p);
	cout << a << "^" << b << " mod " << p << "=" << res;
	return 0;
} 
