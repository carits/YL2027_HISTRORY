#include<bits/stdc++.h>

using namespace std;

int n;

struct Node
{
	int l, r;
}a[100005];

bool cmp(const Node &s1, const Node &s2)
{
	if(s1.l == s2.l)
	{
		return s1.r < s2.r;
	}
	return s1.l < s2.l;
}
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i].l >> a[i].r;
	}
	
	sort(a + 1, a + 1 + n, cmp);
	
	for(int i = 1; i <= n; i++)
	{
		cout << a[i].l << " " << a[i].r << "\n";
	}
	return 0;
}