#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[1000000];
int ans=0;
void f(int l,int r)
{
	if(l==r)return;
	int mid=(l+r)/2;
	f(l,mid);
	f(mid+1,r);
	for(int i =l; i <= mid;i++)
	{
		for(int j= mid+1;j<=r;j++)
		{
			if(a[i]>a[j])ans++;
		}
	}
	
} 
signed main()
{
	
	cin>>n;
	for(int i=1; i<=n;i++)
	{
		cin>>a[i];
	}
	f(1,n);
	cout<<ans+1-1;
    return 0;
}     