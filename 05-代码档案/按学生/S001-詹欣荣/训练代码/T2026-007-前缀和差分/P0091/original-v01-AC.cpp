#include<bits/stdc++.h> 
using namespace std;
long long a[1000005];
long long cf[1000005];
long long ccf[1000005];
long long dp[1000005];
long long ddp[1000005];
int main(){
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		cf[i]=a[i]-a[i-1];
		if(cf[i]>0){
			cf[i]=0;
		}
		dp[i]=cf[i]+dp[i-1];
	
	}
	for(long long i=n;i>=1;i--){
		ccf[i]=a[i]-a[i+1];
		if(ccf[i]>0){
			ccf[i]=0;
		}
		ddp[i]=ccf[i]+ddp[i+1];
	
	}
	for(int i=1;i<=m;i++){
		long long x,y;
		cin>>x>>y;
		if(x<y){
			cout<<abs(dp[x]-dp[y])<<endl;
		}else{
			cout<<abs(ddp[x]-ddp[y])<<endl;
		}
		
	}
	return 0;
}