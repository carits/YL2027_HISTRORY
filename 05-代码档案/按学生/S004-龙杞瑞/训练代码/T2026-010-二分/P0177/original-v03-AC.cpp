#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	n--;
	int l=0,r=2e9;
	while(l+1<r){
		int mid=l+r>>1;
		if(mid*log10(1.0*mid)>=n) r=mid;
		else l=mid;
	}
	cout<<r;
	return 0;
} 