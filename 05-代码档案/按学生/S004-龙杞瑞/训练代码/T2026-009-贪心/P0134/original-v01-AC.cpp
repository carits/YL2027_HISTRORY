#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int t,n,k;
string s,st;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		int cnt=0;
		cin>>n>>k>>s>>st;
		if(s.find(st)<=50){
			cout<<0<<'\n';
			continue;
		}
		if(s.size()>=st.size()){
			s+=s;
			if(s.find(st)<=50){
				cout<<1<<'\n';
				continue;
			}
		} 
		while(s.size()<st.size()) s+=s,cnt++;
		if(s.find(st)<=50){
			cout<<cnt<<'\n';
			continue;
		}
		s+=s;
		if(s.find(st)<=50){
			cout<<cnt+1<<'\n';
			continue;
		}
		cout<<"-1\n";
	} 
	return 0;
}