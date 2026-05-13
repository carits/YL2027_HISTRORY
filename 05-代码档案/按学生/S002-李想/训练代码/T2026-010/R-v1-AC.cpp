#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;
signed main(){
	cin>> n;
	int l=0,r=1e5+1;
	while(l+1<r){
		int mid=(l+r)/2;
//		cout<< "l = " << l << " r = " << r << " mid= " << mid << "\n";
		if(mid*mid*mid<=n)l=mid;
		else r=mid;
	}
	cout<< l; 
	return 0;
}