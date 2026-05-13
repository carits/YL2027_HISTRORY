#include <bits/stdc++.h>
using namespace std;
priority_queue<long long> q;
int n, k;
long long maxn, sum;
struct node {
	long long a, b;
}a[300005];
bool cmp(node a, node b) {
	return a.b < b.b;
}
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i].a >> a[i].b;
	sort(a + 1, a + n + 1, cmp);
	for (int i = n; i >= 1; i--) {
		q.push(-a[i].a);
		sum += a[i].a;
		if (n - i + 1 > k) {
			sum += q.top();
			q.pop();
		}
		maxn = max(maxn, a[i].b * sum);
	}
	cout << maxn;
	return 0;
}