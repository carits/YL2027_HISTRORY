#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int t; cin >> t;
	while (t--){
		bool flg = 0;
		int n;
		cin >> n;
		for (int i = 1; i * i * i <= n; i++){
			int j = n - i * i * i;
			int k = (int)(cbrt(j));
			if (i * i * i + j == n && k * k * k == j && j > 0){
				cout << "YES";
				flg = 1;
				break;
			}
		}
		if (!flg) cout << "NO"; 
        cout << '\n';
	}
}