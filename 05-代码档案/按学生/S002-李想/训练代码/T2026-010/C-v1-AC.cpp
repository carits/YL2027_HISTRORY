#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,x;
void slove(){
	cin>> x;
	for(int i=1;i*i*i<=x;i++){
		int nx=x-i*i*i;
		int l=1,r=min((int)1e4+1ll,nx+1ll);
//		int cnt=0; 
		while(l+1<r){
			int mid=(l+r)/2;
//			cout<< "l = " << l << " r = " << r << " mid= " << mid << "\n";
//			if(++cnt>=10){
//				break;
//			}
			if(mid*mid*mid<=nx)l=mid;
			else r=mid;
		}
		if(l*l*l==nx){
			cout<< "Yes\n";
			return;
		}
	}
	cout<< "No\n";
}
signed main(){
	cin>> t;
	while(t--)slove();
	return 0;
}