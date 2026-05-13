#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 5;
priority_queue<long long> q;
int n, k;
long long ans, sum;
struct node
{
	long long t, b;
} a[N];
bool cmp(node x, node y)
{
	return x.b < y.b;
}
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i].t >> a[i].b;
	sort(a + 1, a + n + 1, cmp);
	for (int i = n; i >= 1; i--)
    {
		q.push(-a[i].t);
		sum += a[i].t;
		if (n - i + 1 > k)
        {
			sum += q.top();
			q.pop();
		}
		ans = max(ans, a[i].b * sum);
	}
	cout << ans;
	return 0;
}