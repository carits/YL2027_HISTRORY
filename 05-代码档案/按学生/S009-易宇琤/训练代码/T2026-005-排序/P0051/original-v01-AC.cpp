#include <bits/stdc++.h>

using namespace std;

const int kN = 5e3 + 5;

struct Node
{
	int x, y;
} pg[kN];

bool Cmp(const Node &x, const Node &y)
{
	return x.y < y.y;
}

int n, s, a, b;
int ans;

int main()
{
	cin >> n >> s >> a >> b;
	for(int i = 1; i <= n; i ++)
	{
		cin >> pg[i].x >> pg[i].y;
	}

	sort(pg + 1, pg + n + 1, Cmp);

	for(int i = 1; i <= n; i ++)
	{
		if(s <= 0)
    {
      break;
    }
		if(pg[i].x <= a + b && pg[i].y <= s)
		{
			ans ++;
			s -= pg[i].y;
		}
		if(s <= 0)
    {
      break;
    }
	}
	cout << ans;
	return 0;
}