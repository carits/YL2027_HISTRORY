#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[1000000];
int tmp[1000000];
int ans=0;
void f(int l,int r)
{
	if(l==r)return;
	int mid=(l+r)>>1;
	f(l,mid);
	f(mid+1,r);
	int i=l,j=mid+1,k=l;
	for(;i<=mid&&j<=r;)
	{
		if(a[i]<=a[j])
		{
			tmp[k++]=a[i++];
		}else{
			tmp[k++]=a[j++];
			ans+=(mid+1)-i;
		}
	}
	for(;i<=mid;i++,k++){
		tmp[k]=a[i];
	}
	for(;j<=r;j++,k++){
		tmp[k]=a[j];
	}
	for(k=l;k<=r;k++)
	{
		a[k]=tmp[k];
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
	cout<<ans;
    return 0;
} 