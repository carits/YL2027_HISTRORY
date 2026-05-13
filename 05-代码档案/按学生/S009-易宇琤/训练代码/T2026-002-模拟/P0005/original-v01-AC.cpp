#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int n, m;
int cur;
struct node
{
	string name;
	int face;
} a[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 0; i < n; i ++)
		cin >> a[i].face >> a[i].name;
	for(int i = 1; i <= m; i ++)
	{
		int x, s;
		cin >> x >> s;
		s %= n;
		if(a[cur].face == 0 && x == 0)
			cur = (cur - s + n) % n;
		else if(a[cur].face == 0 && x == 1)
			cur = (cur + s) % n;
		else if(a[cur].face == 1 && x == 0)
			cur = (cur + s) % n;
		else if(a[cur].face == 1 && x == 1)
			cur = (cur - s + n) % n;
	}
	cout << a[cur].name;
	return 0;
}