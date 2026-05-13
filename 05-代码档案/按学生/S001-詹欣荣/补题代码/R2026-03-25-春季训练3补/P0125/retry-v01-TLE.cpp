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
		int a[n+1];
		a[0]=0;
		ll sum=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		ll b[n+1];
		for(int i=1;i<=n;i++){
			map<ll,ll>mp; 
			for(int j=1;j<=i;j++){
				mp[a[j]]++;
			}
			ll maxn=0;
			for(auto j:mp){
				if(j.second>=2){
					//cout<<j.first<<" ";
					maxn=max(maxn,j.first);
				}
			}
			b[i]=maxn;
		}
		for(int j=1;j<=n;j++){
			a[j]=b[j];
			//cout<<a[j]<<" ";
		}
		
		for(int i=1;i<=n;i++){
			sum+=a[i];
		}
		
		for(int i=1;i<=n;i++){
			map<ll,ll>mp; 
			for(int j=1;j<=i;j++){
				mp[a[j]]++;
			}
			ll maxn=0;
			for(auto j:mp){
				if(j.second>=2){
					maxn=max(maxn,j.first);
				}
			}
			b[i]=maxn;
		}
		for(int j=1;j<=n;j++){
			a[j]=b[j];
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