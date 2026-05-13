#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, m, a[1000005];

int check(int x)
{
	int sum = 0;
	
	for(int i = 1; i <= n; i++)
	{
		if(a[i] > x)
		{
			sum += a[i] - x;
		}
	}
	
	return sum >= m;
}

signed main()
{
	cin >> n >> m;
	
	int maxi = -1e9;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		maxi = max(maxi, a[i]);
	}
	
	int lt = 0, rt = maxi + 1;
	
	while(lt + 1 < rt)
	{
		int mid = (rt + lt) / 2;
		
		if(check(mid) == 1)
		{
			lt = mid;
		}
		else 
		{
			rt = mid;
		}
	}
	
	cout << lt;
	return 0;
}