#include <bits/stdc++.h>
using namespace std;
struct node {
	int x, y;
};
vector<node> ans;
int t, n, a[105];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	while(t--) {
		cin >> n, ans.clear();
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		if(*min_element(a + 1, a + n + 1) == *max_element(a + 1, a + n + 1)) {
			cout << "0\n";
			continue;
		}
		if(*min_element(a + 1, a + n + 1) == 1) {
			cout << "-1\n";
			continue;
		}
		while(*min_element(a + 1, a + n + 1) != *max_element(a + 1, a + n + 1)) {
			int p = min_element(a + 1, a + n + 1) - a, x = a[p];
			for(int i = 1; i <= n; i++)
				if((a[i] - 1) / x + 1 > 1)
					a[i] = (a[i] - 1) / x + 1, ans.push_back((node){i, p});
		}
		cout << ans.size() << '\n';
		for(auto i : ans)
			cout << i.x << ' ' << i.y << '\n';
	}
	return 0;
}