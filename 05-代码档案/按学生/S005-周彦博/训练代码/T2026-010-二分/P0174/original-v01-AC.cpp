#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, a[100005], l = 0, r = 1e18 + 1;
bool check(int x){
	for(int i = 1; i <= n; i++){
		x += a[i];
		if(x <= 0)return 0;
	}
	return 1;
}
signed main(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	while(l + 1 < r){
    	int m = (l + r) / 2;
		if(check(m) == 1) r = m;
		else l = m;
	}
	cout << r;
	return 0;
}