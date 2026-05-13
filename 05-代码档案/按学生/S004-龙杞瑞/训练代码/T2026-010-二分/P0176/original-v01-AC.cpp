#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
int n;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	int l=0,r=1e9+1;
	while(l+1<r){
		int mid=l+r>>1;
		if(mid*mid*mid==n){
			cout<<mid;
			return 0;
		}
		if(mid*mid*mid>n) r=mid;
		else l=mid; 
	}
	cout<<l;
	return 0;
} 