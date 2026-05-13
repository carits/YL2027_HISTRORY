#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	int l=-1,r=2e9+1;
	while(l+1<r){
		int mid=l+r>>1;
		if(mid*log10(mid)<n) l=mid;
		else r=mid;
	}
	cout<<l;
	return 0;
} 