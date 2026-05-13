#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+5;
int n,m,x,a[N]; 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	while(m--){
		cin>>x;
		int v=lower_bound(a+1,a+n+1,x)-a;
		if(a[v]==x) cout<<v<<" ";
		else cout<<-1<<" ";
	}
	return 0;
} 