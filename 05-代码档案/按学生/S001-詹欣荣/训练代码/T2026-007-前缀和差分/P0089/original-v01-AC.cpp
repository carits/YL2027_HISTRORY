#include<bits/stdc++.h> 
using namespace std;
int a[10000005];
long long dp[10000005];
long long ddp[10000005];
int main(){
	int n;
	cin>>n;
	int k=0;
	while(n--){
		int m;
		cin>>m;
		dp[1]=1;
		long long ans=ddp[k];
		for(int i=k+1;i<=m;i++){
			dp[i]=dp[i-1]+1;
			if(i%1000000==0){
				dp[i]-=54;
			}
			else if(i%100000==0){
				dp[i]-=45;
			}
			else if(i%10000==0){
				dp[i]-=36;
			}
			else if(i%1000==0){
				dp[i]-=27;
			}
			else if(i%100==0){
				dp[i]-=18;
			}
			else if(i%10==0){
				dp[i]-=9;
			}
			ans+=dp[i];
			ddp[i]=ans;
			k=i;
		}		
		cout<<ddp[m]<<endl;
	}
	return 0;
}