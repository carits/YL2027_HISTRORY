#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, a[100005];

bool check(int x)
{
	for(int i = 1; i <= n; i++)
	{
		x += a[i];
		if(x <= 0)
		{
			return 0;
		}
	}
	
	return 1;
}

signed main()
{
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	int lt = 0, rt = 1e18 + 1;
	
	while(lt + 1 < rt)
	{
		int mid = (lt + rt) / 2;
		
		if(check(mid) == 1)
		{
			rt = mid;
		}
		else
		{
			lt = mid;
		}
	}
	
	cout << rt;
	return 0;
}