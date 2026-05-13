#include <bits/stdc++.h>
#define int long long
using namespace std;
struct node
{
	int x;
	int type;
};
bool cmp(node a, node b)
{
	if(a.x == b.x)
	{
		return a.type < b.type;
	}
	return a.x < b.x;
}
vector<node> up;
int n, l, r, t[200005];
signed main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> l >> r;
		up.push_back((node){l, 1});
		up.push_back((node){r + 1, -1});
	}
	sort(up.begin(), up.end(), cmp);
	int cnt = 0, last = 0, now = 0;
	int len = up.size();
	for(int i = 0; i < len; i++)
	{
		now = up[i].x;
		t[cnt] += now - last;
		cnt += up[i].type;
		last = now;
	}
	for(int i = 1; i <= n; i++)
	{
		cout << t[i] << " ";
	}
	return 0;
}