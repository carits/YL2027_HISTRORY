#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int a[N],s[N],v[N],n,k,y=1,ans,sum;
map<int,int>mp;
signed main() {	
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
		sum+=abs(a[i]);
	}
	while(abs(y)<=sum){
		if(abs(y)<100){
			if(v[y+100]==1){
				cout<<ans;
				return 0;
			}
			v[y+100]=1;
		}
		mp.clear();
		for(int i=0;i<=n;i++){
			ans+=mp[s[i]-y];
			mp[s[i]]++;
		}
		y*=k;
	}
	cout<<ans;
	return 0;
}