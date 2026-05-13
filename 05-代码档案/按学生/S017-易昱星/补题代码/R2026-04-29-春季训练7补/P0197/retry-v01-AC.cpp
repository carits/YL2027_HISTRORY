#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, n, a[200024];
void solve() {
	cin>>n;
	for (ll i = 1; i <= n; i++) {
		cin>>a[i];
	}
	cout<<a[n];
	for (ll i = 1; i < n; i++) {
		cout<<" "<<a[i];
	}
	cout<<"\n";
}
int main() {
	cin>>t;
	while (t--) {
		solve();
	}	
	return 0;
}//FE