#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int sum=0;
bool if_zhi(int x)
{
	if(x<2)
	{
		return 0;
	}
	for(int i=2;i*i<=x;++i)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}
void dfs(int cur,string s)
{
	if(cur!=1)
	{
		int num=0;
		for(int i=0;i<cur-1;++i)
		{
			num=num*10+(s[i]-'0');
			if(if_zhi(num)==0)
			{
				return ;
			}
		}	
	}
	if(cur==n+1)
	{
		int num=0;
		for(int i=0;i<n;++i)
		{
			num=num*10+(s[i]-'0');
			if(if_zhi(num)==0)
			{
				return ;
			}
		}	
		cout<<s<<endl;
		return ;
	}
	for(int i=0;i<=9;++i)
	{
		dfs(cur+1,s+char(i+'0'));
	}
	return ;
}
signed main()
{
	cin>>n;
	dfs(1,"");
	return 0;
} 