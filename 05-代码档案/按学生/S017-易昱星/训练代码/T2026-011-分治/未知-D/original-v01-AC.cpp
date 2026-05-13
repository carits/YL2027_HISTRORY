#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5,inf=1e18;
int n,tr[N<<1];
struct node{
	int h[5];
} a[N];
inline int lowbit(int x){
	return x&-x;
}
void add(int x,int va){
	for(;x<=n;x+=lowbit(x)) tr[x]=min(tr[x],va);
}
int query(int x){
	if(x<0) return inf;
	int ret=inf;
	for(;x;x-=lowbit(x)) ret=min(ret,tr[x]);
	return ret;
}
int ve[N],cnt=0;
bool cmp(node a,node b){
	return a.h[1]<b.h[1];
}
queue<pair<int,int>>q;
int noww;
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	memset(tr,0x3f3f3f3f3f,sizeof tr);
	for(int i=1;i<=n;i++){
		cin>>a[i].h[1]>>a[i].h[2]>>a[i].h[3];
		sort(a[i].h+1,a[i].h+1+3,greater<int>());
		ve[++cnt]=a[i].h[2];
	}
	sort(a+1,a+1+n,cmp);
	sort(ve+1,ve+1+n);
	for(int i=1;i<=n;i++){
		int x=lower_bound(ve+1,ve+1+n,a[i].h[2])-ve;
		if(i!=1&&a[i].h[1]!=a[i-1].h[1]){
			while(!q.empty()){
				add(q.front().first,q.front().second);
				q.pop();
			}
		}
		q.push({x,a[i].h[3]});
		if(i!=1&&query(x-1)<a[i].h[3]){
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	return 0;
}