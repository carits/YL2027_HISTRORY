#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,a[N];
int check(int x){
	int ans=x;
	for(int i=1;i<=n;i++){
		ans+=a[i];
		if(ans<=0){
			return 0;
		} 
	}
	return ans>0;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int l=0,r=1e9+1;
	while(l+1<r){
		int mid=l+r>>1;
		if(check(mid))  r=mid;
		else l=mid;
	} 
	cout<<r;
	return 0;
} 