#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,t,ans,a[N];
bool cmp(int x,int y){
	return x<y;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		ans=0;
		cin>>n;
		n*=2;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1,cmp);
		cout<<a[n]-a[n/2+1]+a[n/2]-a[1]<<'\n';
		for(int i=1;i<=n/2;i++){
			cout<<a[i]<<" "<<a[i+n/2]<<'\n';
		}
	}
	return 0;
}