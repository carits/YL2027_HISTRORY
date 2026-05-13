#include <bits/stdc++.h>
#define int long long
using namespace std;
priority_queue<int> qp;
signed main() 
{
	int n, ans = 0;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) 
    {
		int x;
		cin >> x;
		sum += x;
		ans++;
		if (x < 0) 
			qp.push(-x);
		if (sum < 0) 
        {
			sum += qp.top();
			ans--;
			qp.pop();
		}
	}
	cout << ans;
	return 0;
}