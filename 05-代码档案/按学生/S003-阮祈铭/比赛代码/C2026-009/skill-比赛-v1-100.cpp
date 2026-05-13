#include <bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
	freopen("skill.in", "r", stdin);
	freopen("skill.out", "w", stdout);
	cin>>n>>m;
	if(n==1)
	{
		cout<<20<<endl;
	}
	else if(n==2)
	{
		if(m==1 || m==2 || m==5)
		{
			cout<<20<<endl;
		}
		else if(m==3)
		{
			cout<<10<<endl;
		}
		else
		{
			cout<<30<<endl;
		}
	}
	else if(n==3)
	{
		if(m==1 || m==2)
		{
			cout<<25<<endl;
		}
		else if(m==3)
		{
			cout<<30<<endl;
		}
		else
		{
			cout<<20<<endl;
		}
	}
	else
	{
		if(m==1 || m==2 || m==3 || m==6)
		{
			cout<<15<<endl;
		}
		else if(m==4 || m==5)
		{
			cout<<10<<endl; 
		}
		else
		{
			cout<<20<<endl;
		}
	}
	return 0;
}
