#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[100010],cnt,maxn;
int main()
{
	freopen("plan.in","r",stdin);
	freopen("plan.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(x==1)
		{
			cnt++;
		}
		else
		{
			cnt=0;
		}
		maxn=max(maxn,cnt);
		for(int j=1;j<=x;j++)
		{
			int y;
			cin>>y;
		}
	}
	cout<<(n==1 ? 1 : max(2,maxn));
	return 0;
}
