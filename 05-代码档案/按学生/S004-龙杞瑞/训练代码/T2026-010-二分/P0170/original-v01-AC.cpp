#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[100005],b[100005];
signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int j=1;j<=m;j++) cin>>b[j];
	sort(b+1,b+m+1);
	for(int i=1;i<=n;i++){
		int pos=lower_bound(b+1,b+m+1,a[i])-b;
		if(b[pos]==a[i]) cout<<b[pos]<<" ";
	}
	return 0;
}
 