#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=5e6+5;
int n,p,x,y,z,ans,minn=1e9,a[N],sub[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>p;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sub[i]=a[i]-a[i-1];
	}
	while(p--){
		cin>>x>>y>>z;
		sub[x]+=z,sub[y+1]-=z;
	}
	for(int i=1;i<=n;i++){
		ans+=sub[i];
		minn=min(minn,ans);
	}
	cout<<minn;
	return 0;
} 