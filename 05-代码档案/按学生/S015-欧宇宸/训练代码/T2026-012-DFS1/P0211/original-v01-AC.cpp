#include<bits/stdc++.h>
using namespace std ;
int n;
int zhi[]={1,2,3,5,7,9};//10以内的奇数 
bool check(int x)
{
	if(x==1)return 0; 
	for(int i = 2; i*i <= x; i++)//判断质数
	{
		if(x%i==0)return 0;
	} 
	return 1;
}
void dfs(int cur,int sum)//cur表枚举到第几位 
{
	if(cur==n+1)//枚举成功 
	{
		cout<<sum<<'\n';
		return;
	}
	for(int i = 0; i < 6; i++)
	{
		if(check(zhi[i]+sum*10))//符合条件 
		{
			dfs(cur+1,sum*10+zhi[i]);
		}
	}
}
int main()
{
	cin>>n;
	dfs(1,0);
	return 0 ;
} 
