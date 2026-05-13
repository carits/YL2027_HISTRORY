#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,m,a[N];
int check(int x){
	int cnt=1,pre=a[1];
	for(int i=2;i<=n;i++){
		if(a[i]-pre>=x){
			cnt++;
			pre=a[i];
		}
	}
	return cnt>=m;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	int l=0,r=1e9+1;
	while(l+1<r){
		int mid=(l+r)>>1;
		if(check(mid)) l=mid;
		else r=mid; 
	}
	cout<<l;
	return 0;
} 