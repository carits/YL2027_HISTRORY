#include<bits/stdc++.h>
using namespace std;
int n,k,m,s[150010]={0},maxn=INT_MAX,max_x;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		s[i]=s[i-1]+m;
	}
	for(int i=1;i<=n-k+1;i++)
	{
		if(s[i+k-1]-s[i-1]<maxn)
		{
			maxn=s[i+k-1]-s[i-1];
			max_x=i;
		}
	}
	cout<<max_x;
	return 0;
}