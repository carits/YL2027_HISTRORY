#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,k,a[N];
int check(int x){
	int sum=0;
	if(x==0) return 1;
	for(int i=1;i<=n;i++) sum+=a[i]/x;
	return sum>=k;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	int l=-1,r=1e9+1;
	while(l+1<r){
		int mid=(l+r)/2;
		if(check(mid)) l=mid;
		else r=mid;
	}
	cout<<l;
	return 0;
} 