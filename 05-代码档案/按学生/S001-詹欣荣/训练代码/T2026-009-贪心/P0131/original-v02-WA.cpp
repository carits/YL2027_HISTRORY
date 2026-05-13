#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s[n+1];
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	string ans="";
	for(int i=1;i<=n;i++){
		string a=s[i]+ans;
		string b=ans+s[i];
		if(a<b){
			ans=a;
		}else{
			ans=b;
		}
	}
	cout<<ans;
	return 0;
}