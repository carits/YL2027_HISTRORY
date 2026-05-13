#include<bits/stdc++.h>
using namespace std;
int minn=INT_MAX;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		sum+=x;
		minn=min(minn,sum);
	}
	if(minn>0)
	{
		minn=1;
	}
	else
	{
		minn=abs(minn)+1;
	}
	cout<<minn;
	return 0;
}