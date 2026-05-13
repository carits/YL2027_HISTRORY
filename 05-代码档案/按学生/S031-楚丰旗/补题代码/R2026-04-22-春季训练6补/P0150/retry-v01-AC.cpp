#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n,ans=0;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			ans+=a[i];
		}
		if(ans%n!=0){
			cout<<-1<<endl;
			continue;
		}
		int o=ans/n;
		int res=0;
		for(int x:a){
			if(x>o){
				res++;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}