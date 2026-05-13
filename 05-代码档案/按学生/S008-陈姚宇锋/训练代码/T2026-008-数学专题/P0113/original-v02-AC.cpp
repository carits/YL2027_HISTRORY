#include <bits/stdc++.h>
using namespace std;
#define int long long
int t;
signed main() 
{
	cin>>t;
	while(t--) 
    {
    	int minn=INT_MAX,mini=0,mind=0,n,x,y;
		cin>>n>>x>>y;
		for(int d=1;d<=50;d++)
		{
			for(int i=1;i<=x;i++)
			{
				if((x-i) % d == 0 && (y-i) % d == 0)
				{
					if((y-i)/d<n)
					{
						if(minn>i+d*(n-1))
						{
							minn=i+d*(n-1);
							mini=i;
							mind=d;
						}
					}
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout << mini+mind*i<< " " ;
		}
		cout <<"\n";      
	}
    return 0;
}