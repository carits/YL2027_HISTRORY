#include<bits/stdc++.h>

using namespace std;

int n, m, a[100005], diff[100005], pre[100005];

int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		diff[i] = a[i] - a[i - 1];
	}
	
	int l, r, c;
	while(m--)
	{
		cin >> l >> r >> c;
		diff[l] += c;
		diff[r + 1] -= c;
	}
	
	for(int i = 1; i <= n; i++)
	{
		pre[i] = pre[i - 1] + diff[i];
		cout << pre[i] << " ";
	}
	return 0;
}