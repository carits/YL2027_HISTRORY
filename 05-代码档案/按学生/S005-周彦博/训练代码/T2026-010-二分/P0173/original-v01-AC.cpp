#include <bits/stdc++.h>
using namespace std;
int a[100005];
int n, m;
bool check(int x){
	int cnt = 1;
	int last = a[1];
	for (int i = 2; i <= n; i++){
		if (a[i] - last >= x){
			cnt++;
			last = a[i];
		}
	}
	return cnt >= m;
}

int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + 1 + n);
    int l = 0, r = a[n] - a[1];	while (l < r){
		int m = (l + r + 1) >> 1;
		if (check(m)) l = m;
		else r = m - 1;
	}
	cout << l << endl;
}
   