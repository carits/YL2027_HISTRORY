#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,m,ans,a[N],b[N];
int find(int x){
	int l=0,r=n+1;
	while(l+1<r){
		int mid=(l+r)>>1;
		if(a[mid]==x) return 0;
		else if(a[mid]>x) r=mid;
		else l=mid;
	}
	if(l==0) return abs(a[r]-x);
	if(r==n+1) return abs(a[l]-x);
	if(abs(a[l]-x)>=abs(a[r]-x)) return abs(a[r]-x);
	return abs(a[l]-x);
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++) ans+=find(b[i]);
	cout<<ans;
	return 0;
} 