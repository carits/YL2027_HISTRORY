#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int n,sum,ans,maxn=-1e9;
struct node{
	int w,c;
}a[N];
bool cmp(node x,node y){
	return x.w-y.c<y.w-x.c;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].w>>a[i].c;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		maxn=max(maxn,sum-a[i].c);
		sum+=a[i].w;
	}
	cout<<maxn;
	return 0;
} 