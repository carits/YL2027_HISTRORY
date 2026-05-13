#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,x,minn=1e9,a[1500005],sum[1500005];
signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	for(int i=m;i<=n;i++) if(sum[i]-sum[i-m]<minn) minn=sum[i]-sum[i-m],x=i-m+1;
	cout<<x;
}