#include <bits/stdc++.h>

using namespace std;

const int kN = 5e3 + 5;

struct Node
{
	int k, s;
} a[kN];

bool Cmp(const Node &x, const Node &y)
{
	if(x.s != y.s)
  {
    return x.s > y.s;
  }
	return x.k < y.k;
}
int n, m, ans;
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
  {
    cin >> a[i].k >> a[i].s;
  }
		
	sort(a + 1, a + 1 + n, Cmp);

	int b = a[int(m * 1.5)].s;
	cout << b << " ";

	for(int i = 1; i <= n; i ++)
  {
    if(a[i].s >= b)
    {
      ans ++;
    }
  }
	cout << ans << "\n";

	for(int i = 1; i <= n; i ++)
  {
    if(a[i].s >= b)
    {
      cout << a[i].k << " " << a[i].s << "\n";
    }
  }

	return 0;
}