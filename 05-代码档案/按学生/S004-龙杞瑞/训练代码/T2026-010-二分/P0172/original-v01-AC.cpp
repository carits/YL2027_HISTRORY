#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+5;
int n,a,b,v[N]; 
int check(int x){
	int ans=0;
	for(int i=1;i<=n;i++) if(v[i]>x*a) ans+=ceil(1.0*(v[i]-x*a)/(b*1.0));
	return ans<=x;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++) cin>>v[i];
	int l=0,r=5e5+1;
	while(l+1<r){
		int mid=l+r>>1;
		if(check(mid)) r=mid;
		else l=mid;
	}
	cout<<r;
	return 0;
} 