#include<bits/stdc++.h>
using namespace std;
int f(int n,int m,int sum)
{
	if(n==1&&m!=1||n<m)
		return -1;
	else if(n==m)
		return sum;
	else
	{
		int a=f(ceil(1.0*n/2),m,sum+1);
		int b=f(n/2,m,sum+1);
		if(a == -1 || b ==-1)
			return max(a,b);
		else
			return min(a,b);
	}
}
int main()
{
	int t,i,n,m;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n>>m;
		cout<<f(n,m,0); 
	}
	return 0;	
}