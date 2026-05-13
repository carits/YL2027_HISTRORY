#include<bits/stdc++.h>

#define int long long

using namespace std;

int m, n, a[100005], b[100005];

int find(int x)
{
	int lt = 0, rt = m + 1;
	
	while(lt + 1 < rt)
	{
		int mid = (lt + rt) / 2;
		
		if(a[mid] == x)
		{
			return 0;
		}
		if(a[mid] > x)
		{
			rt = mid;
		}
		else
		{
			lt = mid;
		}
	}
	
	if(lt == 0)
	{
		return abs(a[rt] - x);
	}
	if(rt == m + 1)
	{
		return abs(a[lt] - x);
	}
	if(abs(a[rt] - x) > abs(a[lt] - x))
	{
		return abs(a[lt] - x);
	}
	return abs(a[rt] - x); 
}

signed main()
{
	cin >> m >> n;
	
	for(int i = 1; i <= m; i++)
	{
		cin >> a[i];
	}
	
	sort(a + 1, a + 1 + m);
	
	for(int i = 1; i <= n; i++)
	{
		cin >> b[i];
	}
	
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += find(b[i]);
	}
	
	cout << sum;
	return 0;
}