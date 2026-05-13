#include <bits/stdc++.h> 
#define ll long long
using namespace std;
int q;
ll t, k;
int a[1000005]; 
string s;
ll so(ll t, ll k){
	if(t == 0) return a[k];
	if(k == 1) return (a[1] + t % 3) % 3;
	return k & 1 ? (so(t - 1,(k + 1) / 2) + 1) % 3 : (so(t - 1,(k + 1) / 2) + 2) % 3;
}
int main(){
	cin >> s >> q;
	for(int i = 0; i < s.size(); i++) a[i + 1] = s[i] - 'A'; 
	while(q--){
		cin >> t >> k;
		cout << (char)(so(t, k) % 3 + 'A') <<endl;
	}
	return 0;
}
