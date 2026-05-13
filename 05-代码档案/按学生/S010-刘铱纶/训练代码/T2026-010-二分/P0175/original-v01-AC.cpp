#include<bits/stdc++.h>

using namespace std;

int n, k, a[100005];

bool check(int x)
{
	int cnt = 0;
	
	if(x == 0)
	{
		return 1;	
	}
	
	for(int i = 1; i <= n; i++)
	{
		cnt += a[i] / x;
	}
	
	return cnt >= k;
}

int main()
{
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	int lt = -1, rt = 1e8 + 1;
	
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