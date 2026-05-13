#include <bits/stdc++.h>
using namespace std;
int check(int n)
{
	if(n%400==0 || n%4==0 && n%100!=0) 
	{
		return 1;	
	}
	else
	{
		return 0; 
	}		
} 
int sum=0;
int main()
{
	int x,y;
	cin>>x>>y;
	for(int i=x;i<=y;++i)
	{
		if(check(i)==1)
		{
			sum+=1;	
		}
	}
	cout<<sum<<endl;
	for(int i=x;i<=y;++i)
	{
		if(check(i)==1)
		{
			cout<<i<<' ';	
		}
	}
	return 0;
}
