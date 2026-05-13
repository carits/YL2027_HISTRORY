#include<bits/stdc++.h>
using namespace std;
int a[30][3],b[30],x;
long long cnt=0;
int dfs(int selp)
{
	if(selp==x)
	{
		cnt++;
		return 0;
	}
	for(int i=1;i<=2;i++)
	{
		if(b[a[selp][i]]==0)
		{
			b[a[selp][i]]=1;
			dfs(selp+1);
			b[a[selp][i]]=0;
		}
	}
	return 0;
}
int main()
{
	cin>>x;
	for(int i=1;i<=x;i++)cin>>a[i][1]>>a[i][2];
	dfs(1);
	cout<<cnt; 
	return 0;
} 