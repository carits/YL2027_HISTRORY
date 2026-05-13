#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

priority_queue<long long> q;
int n, k;
long long ans , sum;
struct node {
	long long t, b;
} a[300005];
bool cmp(node x, node y) {
	return x.b < y.b;
}
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i].t >> a[i].b;
	sort(a + 1, a + n + 1, cmp);
	for (int i = n; i >= 1; i--) {
		q.push(-a[i].t);
		sum += a[i].t;
        //压入新的歌曲
		if (n - i + 1 > k) {
			sum += q.top();
			q.pop();
            //如果歌曲数过大，弹出最短的，q 中存的是负数，负负得正，sum += top 就可以了
		}
		ans = max(ans, a[i].b * sum);
        //更新ans
	}
	cout << ans;
	return 0;
}