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
		int n;
		cin>>n;
		ll a[n+1];
		a[0]=0;
		ll sum=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		ll b[n+1];
		map<ll,ll>mp;
		ll bo[n+1]={};
		ll mmaxn=0;
		
		
		for(int i=1;i<=n;i++){
			if(bo[a[i]]>=1){
				mmaxn=max(mmaxn,a[i]);
			}
			bo[a[i]]++;
			a[i]=mmaxn;
		}
		for(int i=1;i<=n;i++){
			sum+=a[i];
		}
		for(int i=1;i<=n;i++){
			bo[i]=0;
		}
		mmaxn=0;
		for(int i=1;i<=n;i++){
			if(bo[a[i]]>=1){
				mmaxn=max(mmaxn,a[i]);
			}
			bo[a[i]]++;
			a[i]=mmaxn;
		}
		ll tmp=0;
		for(int i=1;i<=n;i++){
			tmp+=a[i];
		}
		
		//cout<<tmp<<'\n';
		ll step=n;
		while(a[step]!=0){
			sum+=tmp;
			//cout<<tmp<<'\n';
			tmp-=a[step];
			a[step]=0;
			step--;
		} 
		cout<<sum<<'\n';
    }	
    return 0;
}