#include <bits/stdc++.h>
using namespace std;
char s[1000009];
int ans=10000009;
void dfs(int l,int r,char now,int cnt)
{
	if(cnt>=ans) 
	{
		return ;
	}
	if(r-l==1)
	{
		if(s[l]!=now) 
		{
			cnt++;
		}
		ans=cnt;
		return ;
	}
	int mid=(l+r)/2;
	int num=0;
	for(int i=l;i<mid;i++)
	{
		if(s[i]!=now) 
		{
			num++;
		}
	}
	dfs(mid,r,now+1,cnt+num);
	num=0;
	for(int i=mid;i<r;i++)
	{
		if(s[i]!=now) 
		{
			num++;
		}
	}
	dfs(l,mid,now+1,cnt+num);
}
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n>>s;
		ans=n;
		dfs(0,n,'a',0);
		cout<<ans<<endl;
	}
	return 0;
}
