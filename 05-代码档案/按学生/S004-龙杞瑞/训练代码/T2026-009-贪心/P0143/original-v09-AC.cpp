#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=3e5+5;
struct node{
	int t,b;
}a[N];
int n,k,sum,maxn;
bool cmp(node x,node y){
	return x.b<y.b;
}
priority_queue<int>p;
signed main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i].t>>a[i].b;
	sort(a+1,a+n+1,cmp);
	for(int i=n;i>=1;i--){
		p.push(-a[i].t);
		sum+=a[i].t;
		if(n-i+1>k){
			sum+=p.top();
			p.pop();
		}

		maxn=max(maxn,sum*a[i].b);
	}
	cout<<maxn;
	return 0;
}