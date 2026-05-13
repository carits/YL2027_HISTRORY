#include <bits/stdc++.h>
#define int long long
using namespace std;
struct node
{
	int id , w;
};
int a , x , m;
node F (int k)
{
	if (k==1) return {a , 1%m};
	node p=F (k/2);
	if (k%2==0)
	{
		return {p.id*p.id%m , (p.w*(p.id+1))%m};
	}
	else
	{
		return {p.id*p.id%m*a%m , (p.w*((p.id*a+1)%m)+p.id)%m};
	}
}
signed main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> x >> m;
	a%=m; 
	cout << F (x).w;
	return 0;
}