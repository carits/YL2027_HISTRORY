#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int t,n,k;
string s;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		int cnt=0;
		cin>>n>>k>>s;
		for(int i=0;i<n;i++) if(s[i]=='B') i+=k-1,cnt++;
		cout<<cnt<<'\n';
	} 
	return 0;
}