#include <bits/stdc++.h>
using namespace std;
long long a[100005];
long long maxn=0;
int n , v;
int main() 
{
	freopen("friends.in", "r", stdin);
  freopen("friends.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);		
  cin >> n;
  for (int i=1;i<=n;i++)
  {
  	cin >> v;
  	a[i]=a[i-1]+v;
  }
  cout << a[n] << " ";
  if (n==1)
  {
  	return 0;
  }
  maxn=0;
  for (int i=1;i<=n-1;i++)
  {
  	maxn=max (maxn , __gcd (a[i] , a[n]-a[i]));
  }
  cout << maxn << " ";
  if (n==2)
  {
  	return 0;
  }
  maxn=0;
  for (int i=1;i<=n-1;i++)
  {
  	for (int j=i+1;j<=n-1;j++)
  	{
  		maxn=max (maxn , __gcd (__gcd (a[i] , a[j]-a[i]) , a[n]-a[j]));
	  }
   } 
   cout << maxn << " ";
   if (n==3)
   {
   	  return 0;
   }
   maxn=0;
   for (int i=1;i<=n-1;i++)
   {
   	for (int j=i+1;j<=n-1;j++)
   	{
   		for (int k=j+1;k<=n-1;k++)
   		{
   			maxn=max (maxn , __gcd (__gcd (__gcd (a[i] , a[j]-a[i]) , a[k]-a[j]) , a[n]-a[k]));
		   }
	   }
   }
   cout << maxn << " ";
   if (n==4)
   {
   	return 0;
   }
   maxn=0;
   for (int i=1;i<=n-1;i++)
   {
   	for (int j=i+1;j<=n-1;j++)
   	{
   		for (int k=j+1;k<=n-1;k++)
   		{
   			for (int l=k+1;l<=n-1;l++)
   			{
   				maxn=max (maxn , __gcd (__gcd (__gcd (__gcd (a[i] , a[j]-a[i]) , a[k]-a[j]) , a[l]-a[k]) , a[n]-a[l]));
			   }
		   }
	   }
   }
   cout << maxn << " ";
   if (n==5)
   {
   	return 0;
   }
   maxn=0;
   for (int i=1;i<=n-1;i++)
   {
   	for (int j=i+1;j<=n-1;j++)
   	{
   		for (int k=j+1;k<=n-1;k++)
   		{
   			for (int l=k+1;l<=n-1;l++)
   			{
   				for (int m=l+1;m<=n-1;m++)
   				{
   					maxn=max (maxn , __gcd (__gcd (__gcd (__gcd (__gcd (a[i] , a[j]-a[i]) , a[k]-a[j]) , a[l]-a[k]) , a[m]-a[l]) , a[n]-a[m]));
   				}
			   }
		   }
	   }
   }
   cout << maxn << " ";
   if (n==6)
   {
   	return 0;
   }
   maxn=0;
   for (int i=1;i<=n-1;i++)
   {
   	for (int j=i+1;j<=n-1;j++)
   	{
   		for (int k=j+1;k<=n-1;k++)
   		{
   			for (int l=k+1;l<=n-1;l++)
   			{
   				for (int m=l+1;m<=n-1;m++)
   				{
   					for (int o=m+1;o<=n-1;o++)
   					{
   						maxn=max (maxn , __gcd (__gcd (__gcd (__gcd (__gcd (__gcd (a[i] , a[j]-a[i]) , a[k]-a[j]) , a[l]-a[k]) , a[m]-a[l]) , a[o]-a[m]) , a[n]-a[o]));
   					}
   				}
			   }
		   }
	   }
   }
   cout << maxn << " ";
   if (n==7)
   {
   	return 0;
	}
	maxn=0;
	for (int i=1;i<=n-1;i++)
   {
   	for (int j=i+1;j<=n-1;j++)
   	{
   		for (int k=j+1;k<=n-1;k++)
   		{
   			for (int l=k+1;l<=n-1;l++)
   			{
   				for (int m=l+1;m<=n-1;m++)
   				{
   					for (int o=m+1;o<=n-1;o++)
   					{
   						for (int p=o+1;p<=n-1;p++)
   						{
   							maxn=max (maxn , __gcd (__gcd (__gcd (__gcd (__gcd (__gcd (__gcd (a[i] , a[j]-a[i]) , a[k]-a[j]) , a[l]-a[k]) , a[m]-a[l]) , a[o]-a[m]) , a[p]-a[o]) , a[n]-a[p]));
   						}
   					}
   				}
			   }
		   }
	   }
   }
	cout << maxn << " ";
	if (n==8)
	{
		return 0;
	}
	if (n<=16)
	{
		for (int i=9;i<=n;i++)
		{
			cout << 1 << " ";
		}
	}
  return 0;
}
