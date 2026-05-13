#include<bits/stdc++.h> 
using namespace std;
int a[10000005];
long long dp[10000005];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i]=dp[i-1]+a[i];
	}
	long long ans=INT_MAX;
	int aans=0;
	for(int i=m;i<=n;i++){
		if(ans>=dp[i]-dp[i-m]){
			ans=dp[i]-dp[i-m];
			aans=i-m+1;
		}
	}
	cout<<aans;
	return 0;
}