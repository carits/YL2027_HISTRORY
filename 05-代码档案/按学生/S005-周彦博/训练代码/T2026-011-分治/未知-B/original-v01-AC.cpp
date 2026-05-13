#include<bits/stdc++.h>
#define int long long
#define node pair<int, int> 
#define a first 
#define b second
using namespace std;
node dx(int a, int x, int m){
	node ret; 
	ret.a = 1 % m, ret.b = a;
	if (x == 1) return ret;
	node t = dx(a, x / 2, m);
	if (x & 1){
		t.a = (t.a * (1 + a * t.b % m) + t.b) % m;
		t.b = t.b * t.b % m * a % m;
	}
	else{
		t.a = t.a * (1 + t.b) % m;
		t.b = t.b * t.b % m;
	}
	return t;
}
int a, x, m;
signed main(){
	cin >> a >> x >> m;
	cout << dx(a, x, m).a % m;
	return 0;
} 