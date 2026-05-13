#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,x,y,ans;
char u,s[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>x>>y>>s;
	for(int i=0;i<x;i++){
		int pos=n-x+i;
		if(i==x-y-1) u='1';
		else u='0';
		if(s[pos]!=u) ans++;
	}
	cout<<ans;
	return 0;
}