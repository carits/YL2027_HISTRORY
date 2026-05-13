#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
struct node{
	int w, s;
}a[50005];

bool cmp(node a, node b){
	return a.w - b.s < b.w - a.s;	
}

signed main(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i].w >> a[i].s;
	sort(a + 1, a + 1 + n, cmp);
	int maxn = -1e18, sum = 0;
	for(int i = 1; i <= n; i++){
		maxn = max(maxn, sum - a[i].s);
		sum += a[i].w; 
	}
	cout << maxn;
	return 0;
}