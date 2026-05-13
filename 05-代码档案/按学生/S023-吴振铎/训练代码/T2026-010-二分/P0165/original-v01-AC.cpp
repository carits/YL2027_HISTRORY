#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000010],b;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++){
		cin>>b;
		int z=lower_bound(a+1,a+n+1,b)-a;
		if(a[z]==b)cout<<z<<" ";
		else cout<<"-1 ";
	}
	return 0;
}