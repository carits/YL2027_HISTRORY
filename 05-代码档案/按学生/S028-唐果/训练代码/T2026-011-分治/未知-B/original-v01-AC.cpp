#include <bits/stdc++.h>
using namespace std;
#define int long long
int ans,a,x,m;
pair<int,int>F(int a,int x,int m){
	if(x==1)
	{
		return make_pair(1%m,a);
	}
	pair<int,int>tmp=F(a,x/2,m);
	if(x%2==0)
	{
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
	cin >> a >> x >> m;
	cout << F(a%m,x,m).first;
	return 0;
} 