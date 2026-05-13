#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,k,ans;
char c;
void slove(){
	ans=0;
	cin>> n >> k;
	vector<int>v;
	for(int i=1;i<=n;i++){
		char c;
		cin>> c;
		if(c=='B')v.push_back(i);
	}
	for(int i=0;i<v.size();i++){
		int st=i;
		while(i<v.size()&&v[i]-v[st]+1<=k)i++;
		i--;
		ans++;
	}
	cout<< ans << "\n";
}
signed main(){
	cin>> t;
	while(t--)slove();
	return 0;
}