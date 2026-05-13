#include<bits/stdc++.h> 
using namespace std;
char a[10000005];
struct A{
	int z;
	int o;
}dp[1000005];
int main(){
	int n;
	int ans=0;
	int maxn=INT_MAX;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i].z=dp[i-1].z;
		dp[i].o=dp[i-1].o;
		if(a[i]=='0'){
			dp[i].z++;
		}else{
			dp[i].o++;
		}
		
	}
	maxn=min(maxn,dp[n].z);
	maxn=min(maxn,dp[n].o);
	for(int i=1;i<=n;i++){
		for(int j=max(i-1-maxn*2,0);j<=i-1;j++){
			int zz=dp[i].z-dp[j].z;
			int oo=dp[i].o-dp[j].o;
		//	cout<<i<<" "<<j<<" "<<zz<<" "<<oo<<"/"; 
			if(zz==oo){
				
				ans=max(ans,i-j);
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}