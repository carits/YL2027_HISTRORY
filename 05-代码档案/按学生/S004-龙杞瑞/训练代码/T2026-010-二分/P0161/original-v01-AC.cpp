#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,k,a[N],b[N];
int check(int x){
	if(x==0) return 1;
	int ans=0;
	for(int i=1;i<=n;i++){
		if(b[i]<a[i]||b[i]/a[i]<x) ans+=a[i]*x-b[i];
		if(ans>k) return 0;
	}
	return ans<=k;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	int l=0,r=2e9+1;
	while(l+1<r){
		int mid=l+r>>1;
		if(check(mid)) l=mid;
		else r=mid;
	}
	cout<<l;
	return 0;
}