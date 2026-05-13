#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,m,a[N];
int check(int x){
	int ans=0;
	while(x){
		ans+=x;
		x/=m;
	}
	return ans>=n;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	int l=0,r=n+1;
	while(l+1<r){
		int mid=l+r>>1;
		if(check(mid))  r=mid;
		else l=mid;
	} 
	cout<<r;
	return 0;
}