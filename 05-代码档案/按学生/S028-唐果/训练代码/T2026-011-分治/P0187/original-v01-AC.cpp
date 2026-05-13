#include <bits/stdc++.h>
using namespace std;
#define int long long
int tmp[500005],ans,n,a[500006];
void solve(int ll,int rr)
{
	if(ll==rr)
	{
		return;
	}
	int mm=(ll+rr)>>1;
	solve(ll,mm);
	solve(mm+1,rr);
	int i=ll,j=mm+1,k=ll;
	for(;i<=mm&&j<=rr;) 
	{
		if(a[i]<=a[j])
		{
			tmp[k++]=a[i++];
		}
		else
		{
			tmp[k++]=a[j++];
			ans+=(mm+1)-i;
		}
	}
	for(;i<=mm;i++,k++)
	{
		tmp[k]=a[i];
	}
	for(;j<=rr;j++,k++)
	{
		tmp[k]=a[j];
	}
	for(k=ll;k<=rr;k++)
	{
		a[k]=tmp[k];
	}
}
signed main()
{
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	solve(1,n);
	cout << ans;
	return 0;
}