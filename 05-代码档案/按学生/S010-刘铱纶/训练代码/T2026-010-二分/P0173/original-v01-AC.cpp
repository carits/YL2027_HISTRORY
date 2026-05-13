#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, m, a[100005];

int check(int x)
{
	int pre = a[1], cnt = 1;
	
	for(int i = 2; i <= n; i++)
	{
		if(a[i] >= pre + x)
		{
			cnt++;
			pre = a[i];
		}
	}
	
	return cnt >= m;
}

signed main()
{
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	sort(a + 1, a + 1 + n);
	
	int lt = 0, rt = 1e9 + 1;
	
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