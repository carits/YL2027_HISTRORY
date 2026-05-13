#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e2+5;
int n,m,k,cnt;
char a[N][N][N];
map<string,int>mp;
signed main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			string stk;
			for(int l=1;l<=k;l++){
				cin>>a[i][j][l];
				stk+=a[i][j][l];
			}
			mp[stk]++;
			if(mp[stk]==1) cnt++;
			if(cnt==2){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}
	return 0;
}