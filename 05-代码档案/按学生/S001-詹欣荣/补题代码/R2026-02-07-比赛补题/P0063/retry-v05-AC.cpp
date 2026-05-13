#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		vector<int>v(n+1);
		for(int i=1;i<=n;i++){
			cin>>v[i];
		}
		v[0]=-1;
		sort(v.begin(),v.end());
		int x=v[1]*v[n];
		vector<int>vv;
		vv.push_back(-1);
		for(int i=2;i*i<=x;i++){
			if(x%i==0){
				vv.push_back(i);
				if(i!=x/i){
					vv.push_back(x/i);
				}
			}
		}
		sort(vv.begin(),vv.end());
		if(v==vv){
			cout<<x<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	return 0;
}