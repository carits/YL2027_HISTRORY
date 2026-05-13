#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
long long n, k;
int h[maxn], w[maxn];
bool check(int x){
	int cnt = 0;
	for(int i = 1; i <= n; i++) cnt += (h[i] / x) * (w[i] / x);
	return cnt >= k;
}
int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++)cin >> h[i] >> w[i];
	int l = 0, r = 1e5;
	while(l + 1 < r){
		int m = (l + r) / 2;
		if(check(m)) l = m;
		else r = m;
	}
	cout << l;
	return 0;
}