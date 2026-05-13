#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e4+5;
int t,x,n,a[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	n=1e4;
	for(int i=1;i<=n;i++) a[i]=i*i*i;
	while(t--){
		int f=0;
		cin>>x;
		for(int i=1;pow(i,3)<=x;i++){
			int m=x-pow(i,3);
			int pos=lower_bound(a+1,a+n+1,m)-a;
			if(pow(i,3)+a[pos]==x){
				cout<<"YES\n";
				f=1;
				break;
			}	
		}
		if(f==0) cout<<"NO\n";
	}
	return 0;
}