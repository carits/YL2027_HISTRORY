#include<bits/stdc++.h>
#define int long long
using namespace std;
int T;
signed main(){
	cin>>T;
	while(T--){
		int n,x,y;
		cin>>n>>x>>y;
		int t=y-x; 
		vector<int>v;
		for(int i=1;i<=t;i++)
			if(t%i==0)
				v.push_back(i);
		for(int i=0;i<v.size();i++){
			int cnt=t/v[i]+1;
			if(cnt>n)
				continue;
			int ans=min(n-cnt,x/v[i]);
			int st=x-ans*v[i];
			if(st==0)
				st+=v[i];
			int k=v[i];
			for(int i=st;i<=st+(n-1)*k;i+=k)
				cout<<i<<" ";
			break;
		}
		cout<<"\n";
	}
	return 0;
}