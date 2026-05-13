#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++){
		ll n,k;
		cin>>n>>k;
		ll cnt=n;
		if(k>=1){
			cnt--;
		}
		for(int j=2;j<=n;j+=2){
			ll m=j;
			for(int l=1;l<=k;l++){
				if(m%2==0){
					m=m/2;
				}else{
					m--;
				}
				if(m==0){
					if(l+1<=k){
						cnt--;
					}
					cnt--;
					break;
				}
			}
		}
		if(cnt<0){
			cnt=0;
		}
		cout<<cnt<<endl;
	}
    return 0;
}