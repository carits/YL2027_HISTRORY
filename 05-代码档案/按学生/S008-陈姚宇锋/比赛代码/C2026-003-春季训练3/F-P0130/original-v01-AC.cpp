#include <bits/stdc++.h>
using namespace std;
#define int long long
int vis[100010];
void aishishai(int x)
{
	vis[1]=vis[0]=1;
	for(int i=2;i<=x;++i)
	{
		if(vis[i]==0)
		{
			for(int j=i+i;j<=x;j+=i)
			{
				vis[j]=1;
			}
		}
	}
	return ;	
}
signed main()
{
    aishishai(100009);
	int t;
    cin>>t;
	while(t--) 
	{
	   int x,y;
	   cin>>x>>y;
	   int flag=0;
	   for(int i=x+1;i<y;++i)
	   {
	       if(__gcd(y,i)==1 && __gcd(x,i)==1)
	       {
	           cout<<i<<endl;
               flag=1;
               break;
	       }
	   }
	   if(flag==0)
	   {
	       cout<<-1<<endl;
	   }
	}
	return 0;
}