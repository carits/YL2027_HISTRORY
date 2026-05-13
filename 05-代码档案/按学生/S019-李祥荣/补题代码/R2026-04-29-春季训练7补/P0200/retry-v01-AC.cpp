#include<bits/stdc++.h>
using namespace std;
long long t,n,ans=0;
int main(){
	cin>>t;
	while(t--){
		map<int,int> mp;
		cin>>n;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			for(int i=2;i*i<=x;i++){
				while(x%i==0){
					x/=i;
					mp[i]++;
				}
			}
			if(x>1) mp[x]++;
		}
		for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
			int y=it->second,s=y/2;
			ans+=s;
			it->second-=s*2;
		}
		int s=0;
		for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
			int y=it->second;
			s+=y;
		}
		ans+=s/3;
		cout<<endl<<ans<<endl;
		ans=0;
	}
	
	return 0;
}