#include<bits/stdc++.h>

using namespace std;

int n, m, a[100005], b[100005];

bool check(int x)
{
	int lt = 0, rt = m + 1;
	
	while(lt + 1 < rt)
	{
		int mid = (lt + rt) / 2;
		
		if(b[mid] == x)
		{
			return 1;
		}
		
		if(b[mid] > x)
		{
			rt = mid;
		}
		else
		{
			lt = mid;
		}
	}
	return 0;
}

int main()
{
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	for(int i = 1; i <= m; i++)
	{
		cin >> b[i];
	}
	sort(b + 1, b + 1 + m);
	
	for(int i = 1; i <= n; i++)
	{
		if(check(a[i]) == 1)
		{
			cout << a[i] << " ";
		}
	}
	
	return 0;
}