#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,k,sum,a[N],b[N];
int check(int x){
	int ans=0;
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++) b[i]=a[i]+i*x;
	sort(b+1,b+n+1);
	for(int i=1;i<=x;i++) ans+=b[i];
	return ans<=k;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	int l=0,r=n+1;
	while(l+1<r){
		int mid=l+r>>1;
		if(check(mid)) l=mid;
		else r=mid;
	}
	cout<<l<<" ";
	for(int i=1;i<=l;i++) sum+=a[i]+i*l;
	cout<<sum;
	return 0;
}