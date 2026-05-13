#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5,M=1e5+5;
int n,mx,v[N],pre[N];
char a[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	memset(v,-1,sizeof(v));
	v[M]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]=='1') pre[i]++;
		else pre[i]--;
		pre[i]+=pre[i-1];
		if(v[pre[i]+M]==-1) v[pre[i]+M]=i;
	}
	if(pre[n]==n){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		int x=v[pre[i]+M];
		mx=max(mx,i-x);
	} 
	cout<<mx;
	return 0;
}