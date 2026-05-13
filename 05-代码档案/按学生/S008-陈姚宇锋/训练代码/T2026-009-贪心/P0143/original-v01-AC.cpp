#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct stu
{
	ll v;
	ll t;
	bool operator < (stu x)const
	{
		return v<x.v;
	}
}a[1000009];
priority_queue<ll,vector<ll>,greater<ll> >op;
ll n,k,sum,ans;
int main()
{
	cin>>n>>k;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i].t>>a[i].v;
	}
	sort(a+1,a+n+1);
	for(ll i=n;i>=1;i--)
	{
		ll f=op.size();
		if(f<k)
		{
			op.push(a[i].t);
			sum+=a[i].t;
		}
		if(f>=k && a[i].t>op.top())
		{
			sum-=op.top();
			op.pop();
			sum+=a[i].t;
			op.push(a[i].t);	
		}
		ans=max(ans,a[i].v*sum);
	}
	cout<<ans;
}