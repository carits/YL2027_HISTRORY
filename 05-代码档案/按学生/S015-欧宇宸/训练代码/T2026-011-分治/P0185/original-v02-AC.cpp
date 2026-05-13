#include<bits/stdc++.h>
using namespace std;
#define int long long
int a,b,p;
int f(int a,int b)
{
	if(b==0)return 1;
	if(b%2==0)
	{
        int t =f(a,b/2);
		return t*t%p;
	}
	else
	{
        int t =f(a,b/2);
		return t*t%p*a%p;
	}
} 
signed main()
{
	
	cin>>a>>b>>p;
	cout<<a<<'^'<<b<<" "<<"mod "<<p<<"="<<f(a,b)%p;
    return 0;
}