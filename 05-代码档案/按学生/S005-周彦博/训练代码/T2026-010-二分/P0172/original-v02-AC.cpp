#include<iostream>
#define int long long
using namespace std;
int n,a,b,clothes[600006];
bool check(int mid)
{
	int tot=0;
	for(int i=1;i<=n;i++)
	{
		if(clothes[i]<=mid*a)continue;
		else 
		{
			
			if((clothes[i]-mid*a)%b==0)tot+=(clothes[i]-mid*a)/b;
			else tot+=((clothes[i]-mid*a)/b+1);
		}
	}
	return tot<=mid;
}
signed main()
{
	ios::sync_with_stdio(0);
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++)cin>>clothes[i];
	int l=0,r=1e9,mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(check(mid))r=mid-1;
		else l=mid+1;
	}
	cout<<l<<endl;
	return 0;
} 
