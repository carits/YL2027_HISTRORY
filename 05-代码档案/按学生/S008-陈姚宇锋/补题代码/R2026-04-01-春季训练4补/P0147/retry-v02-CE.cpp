#include<bits/stdc++.h>
using namespace std;
#define int long long 
int main()
{
	for(int i=1;i<=10;++i)
	{
		for(int j=1;j<=10;++j)
		{
			if(i==j) 
			{
				continue;
			}
			int x=i,y=j;
			int cnt=0;
			while(x%10!=y%10)
			{
				x+=x%10;
				cnt++;
				if(cnt>1e4)
				{
					cout<<i<<' '<<j<<":NO\n";
					break;
				}
			}
			if(cnt<=N) 
			{
				cout<<i<<' '<<j<<":YES\n";
			}
		}
	}
	return 0;
}