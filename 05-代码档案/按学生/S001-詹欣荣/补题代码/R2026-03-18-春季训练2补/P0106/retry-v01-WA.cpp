#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
		ll n,m,h;
		cin>>n>>m>>h;
		ll a[n+1][2];
		ll ans=1;
		for(ll i=1;i<=n;i++){
			vector<ll>v;
			ll b[m+1];
			for(ll l=1;l<=m;l++){
				cin>>b[l];
			}
			sort(b+1,b+m+1);
			ll j=0;
			v.push_back(0);
			while(v[j]<=h){
				j++;
				v.push_back(v[j-1]+b[j]);
			}
			j--;
			a[i][1]=j;
			for(ll k=1;k<=j;k++){
				a[i][2]+=v[k];
			}
		}
		for(ll k=2;k<=n;k++){
			if(a[k][1]>a[1][1]||(a[k][1]==a[1][1]&&a[k][2]<a[1][2])){
				ans++;
			}
		}
		cout<<ans<<'\n';
	}
}