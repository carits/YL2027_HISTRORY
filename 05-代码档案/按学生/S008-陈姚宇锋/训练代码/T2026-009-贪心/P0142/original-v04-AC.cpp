#include <bits/stdc++.h>
using namespace std;
#define int long long
priority_queue<int>op;
int a[1000009];
signed main()
{
	int n;
	cin>>n;
	int sum=0,ans=0;
	int minn=INT_MAX;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			op.push(-a[i]);
			sum+=a[i]; 
			ans++;
			if(sum<0)
			{
				sum+=op.top();
				ans--;
				op.pop();
			}
		}
		else
		{
			sum+=a[i]; 
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}