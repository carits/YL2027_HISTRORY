#include <bits/stdc++.h>
#define int long long
using namespace std;
int a,x,k;
pair<int,int> F(int a,int x,int m)
{
	if(x==1)
	{
		return make_pair(1%m,a); 
	}
	pair<int,int>tmp=F(a,x/2,m);
	if(x%2==0){
		tmp.first=tmp.first*(1+tmp.second)%m;
		tmp.second=tmp.second*tmp.second%m;
	} 
	else
	{
		tmp.first=(tmp.first*(1+a*tmp.second%m)+tmp.second)%m;
		tmp.second=tmp.second*tmp.second%m*a%m;
	}
	return tmp;
}

	
	
signed main()
{
	cin>>a>>x>>k;
	cout<<F(a,x,k).first; 
	return 0;
}

