#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=2e5+5;
int q,n,l,r,pre[N];
string s;
signed main(){
	cin>>n>>q>>s; 
	pre[0]=s[0]-'a'+1;
	for(int i=1;i<n;i++) pre[i]=pre[i-1]+(s[i]-'a')+1;
	while(q--){
		cin>>l>>r;
		l--,r--;
		if(l==0) cout<<pre[r]<<'\n';
		else cout<<pre[r]-pre[l-1]<<'\n';
	}
	return 0;
}