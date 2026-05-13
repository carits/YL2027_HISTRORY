#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
	int i=0;
	int n=min(a.size(),b.size());
	while(a[i]==b[i]&&i<=n){
		i++;
	}
	return a[i]<b[i];
}
int main(){
	int n;
	cin>>n;
	string s[n+1];
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<s[i];
	}
}