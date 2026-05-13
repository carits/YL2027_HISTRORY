#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,m,maxn,j;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		maxn=0;
		cin>>n;
		for(j=1;j<=n;j++)
		{
			cin>>m;
			maxn=max(maxn,m);
		}
		cout<<maxn<<endl;
	}
	return 0;
}