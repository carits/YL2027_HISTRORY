#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, k;

priority_queue<int> pq; 

struct Node
{
	int x, y;
}a[300005];

bool cmp(Node s1, Node s2)
{
	return s1.y < s2.y;
}

signed main()
{
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i].x >> a[i].y;
	}
	
	sort(a + 1, a + 1 + n, cmp);
	
	
	int maxi = -1e9, sum = 0;
	for(int i = n; i >= 1; i--)
	{
		pq.push(-a[i].x);
		sum += a[i].x;
		if(n - i + 1 > a[i].x)
		{
			sum += pq.top();
			pq.pop();
		} 
		
		maxi = max(maxi, a[i].y * sum);
	}
	
	cout << maxi;
	return 0;
}