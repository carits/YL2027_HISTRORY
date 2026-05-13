#include<bits/stdc++.h>

#define int long long

using namespace std;

int n;

struct Node
{
	int w, s;
}a[50005];

bool cmp(Node s1, Node s2)
{
	return s1.w - s2.s < s2.w - s1.s;
}

signed main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i].w >> a[i].s;
	}
	
	sort(a + 1, a + 1 + n, cmp);
	
	int maxi = -1e18, sum = 0;
	for(int i = 1; i <= n; i++)
	{
		maxi = max(maxi, sum - a[i].s);
		sum += a[i].w; 
	}
	//
	cout << maxi;
	return 0;
}