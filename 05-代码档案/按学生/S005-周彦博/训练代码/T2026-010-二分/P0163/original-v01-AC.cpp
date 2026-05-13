#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n, k, a, b;
int check(int x){
	int m = n;
	a = x;
	b = 1; 
	while(m > 0 && a > 0){
		m -= a;
        b *= k;
        a = x / b; 
	}
	if(m <= 0) return 1; 
	else return 0;
}
signed main(){
	cin >> n >> k;
	int l = 1 - 1, r = 1e9 + 1;
	while(l + 1 != r){
		int m = (l + r) / 2; 
		if(check(m) == 1) r = m; 
		else l = m;
	}
	cout << r;
	return 0;
}