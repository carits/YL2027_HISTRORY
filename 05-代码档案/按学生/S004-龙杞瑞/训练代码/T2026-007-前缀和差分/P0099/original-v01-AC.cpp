#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=510;
int n,m,q,b[N][N],c[N][N],i,j;
char a[N][N];
signed main(){
	ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>a[i][j];
	for(int i=1;i<=n;i++) for(int j=1;j<m;j++) if(a[i][j]=='.'&&a[i][j+1]=='.') b[i][j+1]=1;
	for(int i=1;i<n;i++) for(int j=1;j<=m;j++) if(a[i][j]=='.'&&a[i+1][j]=='.') c[i+1][j]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[i][j]+=b[i-1][j]+b[i][j-1]-b[i-1][j-1];
			c[i][j]+=c[i-1][j]+c[i][j-1]-c[i-1][j-1];
		}	
	}	
	cin>>q;
	while(q--){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<b[x2][y2]-b[x1-1][y2]-b[x2][y1]+b[x1-1][y1]+c[x2][y2]-c[x1][y2]-c[x2][y1-1]+c[x1][y1-1]<<'\n';
	}
}