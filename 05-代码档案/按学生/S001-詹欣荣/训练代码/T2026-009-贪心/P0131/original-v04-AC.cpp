#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
	string c=b+a;
	string d=a+b;
	return c>d;
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