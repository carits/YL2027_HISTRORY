#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,k,A,B;
int a[N];
int query(int l,int r){
	return upper_bound(a+1,a+k+1,r)-lower_bound(a+1,a+k+1,l);
}
int solve(int l,int r){
	int cnt=query(l,r),len=r-l+1;
	if(cnt==0) return A;
	int ans=B*cnt*len;
	if(len==1) return ans;
	int mid=(l+r)>>1;
	ans=min(ans,solve(l,mid)+solve(mid+1,r));
	return ans;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>k>>A>>B;
	for(int i=1;i<=k;i++)cin>>a[i];
	sort(a+1,a+k+1);
	cout<<solve(1,(1ll<<n));
	return 0;
}