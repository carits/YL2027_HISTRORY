#include <bits/stdc++.h>
using namespace std;
int a[100005];
priority_queue <int, vector <int>, greater<int> > q;
int main() 
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
    {
		cin >> a[i];
		if (i <= m) q.push(a[i]);
	}
	for (int i = m + 1; i <= n; i++) 
    {
		int t = q.top();
		q.pop();
		q.push(t + a[i]);
	}
	int ma = 0;
	while (!q.empty()) 
    {
		ma = max(ma, q.top());
		q.pop();
	}
	cout << ma;
	return 0;
}