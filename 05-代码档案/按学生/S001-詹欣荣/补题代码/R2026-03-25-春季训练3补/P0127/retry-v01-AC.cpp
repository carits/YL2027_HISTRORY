#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
		ll n;
		cin>>n;
		ll maxn=0,minn=0;
		for(int i=1;i<=n;i++){
			ll a;
			cin>>a;
			ll t1=maxn+a;
			ll t2=abs(maxn+a);
			ll t3=minn+a;
			ll t4=abs(minn+a);
			maxn=max(max(t1,t2),max(t3,t4));
			minn=min(min(t1,t2),min(t3,t4));
		}
		cout<<maxn<<'\n';
    }	
    return 0;
}