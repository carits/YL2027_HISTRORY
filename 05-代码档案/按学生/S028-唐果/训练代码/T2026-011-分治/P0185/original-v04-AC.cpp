#include<bits/stdc++.h>
using namespace std;
#define int long long
int a,b,p,ans=1; 
int f(int a,int b,int p)
{
	if(b==0)
	{
		return 1;
	}
	int t=f(a,b/2,p);
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

signed main(){
	cin >> a >> b >> p;
	int res=f(a,b,p);
	cout << a << "^" << b << " mod " << p << "=" << res;
	return 0;
} 
