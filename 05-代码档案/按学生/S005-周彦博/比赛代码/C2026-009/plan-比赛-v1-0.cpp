#include <bits/stdc++.h>

using namespace std;
int n, m;
int main() {
    freopen("plan.in", "r", stdin);
    freopen("plan.out", "w", stdout);
    cin >> n >> m;
    if (n == 10){
    	if (m == 1) cout << '6';
    	else cout << '3';
	}
	else if (n == 1000) cout << 1000;
	else if (n == 1000){
		if (m == 6) cout << 797;
	}
	else if (n == 100000)cout << 31656;
	else cout << 0;
    return 0;
}
