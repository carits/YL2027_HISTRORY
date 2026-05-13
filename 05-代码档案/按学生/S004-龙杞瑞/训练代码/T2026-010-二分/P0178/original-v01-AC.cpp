#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int check(int x,int k,int n,int a,int b){
	k-=x*a;
	k-=(n-x)*b;
	return k>0;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int q,a,b,n,k;
	cin>>q;
	while(q--){
		cin>>k>>n>>a>>b;
		 int l=-1,r=n+1;
		 while(l+1<r){
		 	int mid=l+r>>1;
		 	if(check(mid,k,n,a,b)) l=mid;
		 	else r=mid;
		 }
		 cout<<l<<'\n';
	}
	return 0;
}