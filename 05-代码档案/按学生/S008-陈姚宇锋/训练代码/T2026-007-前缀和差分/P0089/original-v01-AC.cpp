#include <bits/stdc++.h>
using namespace std;
#define int long long
int diff[10000009];
signed main()
{
	int t;
	cin>>t;
	for(int i=1;i<=2e5+10;++i)
	{
		int sum=0;
		int num=i;
		while(num)
		{
			sum+=num%10;
			num/=10;		
		}
		diff[i]=diff[i-1]+sum;
	}
	while(t--)
	{
		int n;
		cin>>n;
		cout<<diff[n]<<endl;
	}
} 