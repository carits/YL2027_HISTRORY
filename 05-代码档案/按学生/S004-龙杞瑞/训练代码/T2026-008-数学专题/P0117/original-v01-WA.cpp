#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;;
int t,n,b,a[N];
int check(int x){
	if(x==n) return 1;
	b=abs(a[1+x]-a[1]);
	for(int i=1;i<=n-x;i++){
		b=__gcd(b,abs(a[i+x]-a[i]));
		if(b==1) return 0;
	}
	return 1;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n;  
		for(int i=1;i<=n;i++) cin>>a[i];
		int ans=0;
		for(int i=1;i*i<=n;i++){
			if(n%i==0){
				if(check(i)) ans++;
				if(n/i!=i&&check(n/i)) ans++;
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}