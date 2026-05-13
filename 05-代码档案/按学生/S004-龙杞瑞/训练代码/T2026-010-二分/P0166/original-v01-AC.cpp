#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,x,a[N],pre[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre[i]=pre[i-1]+a[i];
	}
	while(m--){
		cin>>x;
		int pos=lower_bound(pre+1,pre+n+1,x)-pre;
		x-=pre[pos-1];
		cout<<pos<<" "<<x<<'\n';
	}
	return 0;
}