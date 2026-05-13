#include<bits/stdc++.h>
using namespace std;
const int N=105;
int t,n,m,a[N][N],dp[N][N],b[N*N],bn;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>a[i][j];
		int g=__gcd(a[1][1],a[n][m]);
		bn=0;
		for(int i=1;i*i<=g;i++){
			if(g%i==0){
				b[++bn]=i;
				if(i*i!=g) b[++bn]=g/i;
			}
		}
		int ans=1;
		for(int k=1;k<=bn;k++){
			int d=b[k];
			for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)dp[i][j]=0;
			if(a[1][1]%d==0) dp[1][1]=1;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=m;j++){
					if(dp[i][j]){
						if(i<n&&a[i+1][j]%d==0) dp[i+1][j]=1;
						if(j<m&&a[i][j+1]%d==0) dp[i][j+1]=1;
					}
				}
			}
			if(dp[n][m]) ans=max(ans,d);
		}
		cout<<ans<<'\n';
	}
	return 0;
}