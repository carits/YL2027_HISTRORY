#include <bits/stdc++.h>
using namespace std;
#define int  long long
int n;
int a[1000009];
int sum=0;

signed main()
{
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		for(int j=1;j<i;++j)
		{
			if(a[j]>a[i])
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;	
}