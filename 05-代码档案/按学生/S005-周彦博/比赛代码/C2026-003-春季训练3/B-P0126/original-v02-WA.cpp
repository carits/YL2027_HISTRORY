#include <bits/stdc++.h>
using namespace std;
const int N=1e5 + 5;
int x;
void so(){
	cin >> x;
	if (x % 10 == 9){
		cout << "NO\n";
		return;
	}
    x/=10;
	while (x > 10){
		if (x % 10 == 0) {
			cout << "NO" << endl;
			return;
		}
		x /= 10;
	}
	if (x != 1) cout << "NO\n";
	else cout << "YES\n";
}
signed main(){
	int T;
    cin >> T;
	while (T--) so();
	return 0;
}