#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 3e5 + 5;
map<int, int> mp[2];
int a[N], q[N];
signed main()
{
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
    {
		cin >> a[i];
		q[i] = q[i - 1] ^ a[i];
	}
	mp[0][0] = 1;
	for (int i = 1; i <= n; i++)
    {
		cnt += mp[i % 2][q[i]];
		mp[i % 2][q[i]]++;
	}
	cout << cnt;
	return 0;
}