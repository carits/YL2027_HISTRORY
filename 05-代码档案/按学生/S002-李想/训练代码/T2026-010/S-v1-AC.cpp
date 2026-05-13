#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,k;
bool check(int x){
	int nx=(x*log10(1.0*x))+1;
	return nx>=n;
}
signed main(){
	cin>> n;
	int l=0,r=2e9+1;
	while(l+1<r){
		int mid=(l+r)>>1;
		if(check(mid))r=mid;
		else l=mid;
	}
	cout<< ++l;
	return 0;
}