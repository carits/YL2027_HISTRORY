#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=3e5+5;
struct node{
	int t,b;
}a[N];
int n,k,sum,maxn=-1e9;
bool cmp(node x,node y){
	return x.b>y.b;
}
priority_queue<int>p;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i].t>>a[i].b;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=k;i++){
		sum+=a[i].t;
		p.push(a[i].t);
		if(p.size()>k){
			sum-=p.top();
			p.pop();
		}
		maxn=max(maxn,sum*a[i].b);
	}
	cout<<maxn;
	return 0;
}