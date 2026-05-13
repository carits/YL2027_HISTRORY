#include<bits/stdc++.h>
using namespace std;
string s,u;
long long s1=1,u1=1;
int main(){
	cin>>s>>u;
	for(int i=0;i<s.size();i++)	s1*=s[i]-64;
	for(int i=0;i<u.size();i++) u1*=u[i]-64;
	if(s1%47==u1%47) cout<<"GO";
	else cout<<"STAY";
	return 0;
}