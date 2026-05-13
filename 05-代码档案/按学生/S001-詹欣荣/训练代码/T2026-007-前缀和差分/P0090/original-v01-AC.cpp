#include<bits/stdc++.h> 
using namespace std;
char ch[1000005];
char cnt[1000005];
int dp[1000005];
int main(){
	int n,m;
	cin>>n>>m;
	int k=0;
	for(int i=1;i<=n;i++){
		cin>>ch[i];
		dp[i]=dp[i-1]+(int)ch[i]-'a'+1;
		//cout<<dp[i]<<" ";
	}
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		cout<<dp[y]-dp[x-1]<<endl;
	}
	return 0;
}