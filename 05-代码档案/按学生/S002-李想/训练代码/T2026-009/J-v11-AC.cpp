#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n;
int const N=2e5+5;
struct node{
	int x,y;
}a[N];
bool cmp(node x,node y){
	return (x.x-y.y)<(y.x-x.y);
}
void slove(){
	cin>> n;
	for(int i=1;i<=n;i++)cin>> a[i].x >> a[i].y;
	sort(a+1,a+n+1,cmp);
	int sum=0,ans=-1e18;
	for(int i=1;i<=n;i++){
		ans=max(ans,sum-a[i].y);
		sum+=a[i].x;
	}
	cout<< ans;
}
signed main(){
	t=1;
	while(t--)slove();
	return 0;
}