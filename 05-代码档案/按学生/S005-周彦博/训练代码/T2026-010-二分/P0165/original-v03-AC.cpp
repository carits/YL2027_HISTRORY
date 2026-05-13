#include<bits/stdc++.h> 
using namespace std;
int a[1000005], n, m;
int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a+ 1, a + n + 1);
	for (int i = 1; i <= m; i++){
		int x;
		cin >> x;
		int idx = lower_bound(a + 1, a + n + 1, x) - a;
		if (idx == n + 1 || a[idx] > x ) cout << "-1 ";
		else cout << idx << ' ';
	}
	return 0;
}