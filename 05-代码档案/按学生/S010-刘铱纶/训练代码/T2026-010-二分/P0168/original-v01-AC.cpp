#include<bits/stdc++.h>

using namespace std;

int n, k, h[100005], w[100005];

bool check(int x)
{
	int ans = 0;
	
	for(int i = 1; i <= n; i++)
	{
		ans += (h[i] / x) * (w[i] / x);
	}
	
	return ans >= k;
}

int main()
{
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> h[i] >> w[i];
	}
	
	int lt = 1 - 1, rt = 1e5 + 1;
	
	while(lt + 1 < rt)
	{
		int mid = (lt + rt) / 2;
		
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