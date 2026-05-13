#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,n,m,sum,s,x;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		sum=0;
		cin>>n>>s>>x;
		for(j=1;j<=n;j++)
		{
			cin>>m;
			sum+=m;
		}
		if((s-sum)%x==0&&s>=sum)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}