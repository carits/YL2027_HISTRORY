#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() 
{
  	freopen("skill.in", "r", stdin);
  	freopen("skill.out", "w", stdout);
 	int n,m;
 	cin>>n>>m;
 	if(n==1)
 	{
 		cout<<20<<endl;	
	}
	else if(n==2)
	{
		if(m==1)
		{
			cout<<20<<endl;	
	 	} 
	 	else if(m==2)
	 	{
	 		cout<<20<<endl; 
		} 
		else if(m==3)
		{
			cout<<10<<endl;
		}
		else if(m==4)
		{
			cout<<30<<endl;
		}
		else
		{
			cout<<20<<endl;
		}
	}
	else if(n==3)
	{
		if(m==1)
		{
			cout<<25<<endl;	
		} 
		else if(m==2)
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
		if(m==1)
		{
			cout<<15<<endl;	
	 	} 
	 	else if(m==2)
	 	{
	 		cout<<15<<endl; 
		} 
		else if(m==3)
		{
			cout<<15<<endl;
		}
		else if(m==4)
		{
			cout<<10<<endl;
		}
		else if(m==5)
		{
			cout<<10<<endl;
		}
		else if(m==6)
		{
			cout<<15<<endl;
		}
		else
		{
			cout<<20<<endl;
		}
	}
  	return 0;
}
