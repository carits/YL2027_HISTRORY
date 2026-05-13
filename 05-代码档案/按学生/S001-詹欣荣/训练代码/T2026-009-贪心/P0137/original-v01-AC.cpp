#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	ll t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int l=0,r=0;
		int cnt=0;
		char ch[s.size()+1];
		for(int i=0;i<=n-1;i++){
			ch[i+1]=s[i];
			//cout<<ch[i+1]<<" ";
		}
		for(int i=1;i<=n;i++){
			//cout<<ch[i]<<" ";
			if(ch[i]=='B'){
				cnt++;
				for(int j=i;j<=min(i+k-1,n);j++){
					ch[j]='W';
					//cout<<j<<" "; 
				}
			}
		}
		
			cout<<cnt<<'\n';
	}
	return 0;
}