#include<bits/stdc++.h>
using namespace std;
#define int long long
int a,x,m;
int p;
int check(int x,int y)
{
	int ret=1;
	while(y) 
	{
		
		if(y&1)
		{
			ret=ret*x%p;
		}
		x=x*x%p;
		y>>=1; 
	}
	return !ret?p:ret;
}
signed main()
{
    cin>>a>>x>>m;
    if(a==1)
	{
        cout<<x%m;
        return 0;
    }
    p=m*(a-1);
    cout<<(check(a,x)-1)/(a-1);
    return 0;
}
