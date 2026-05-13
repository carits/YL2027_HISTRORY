#include<bits/stdc++.h>

using namespace std;

int n, m, a[1000005];

int check(int x)
{
	int lt = 0, rt = n + 1;
	
	while(lt + 1 < rt)
	{
		int mid = (lt + rt) / 2;
		
		if(a[mid] >= x)
		{
			rt = mid;
		}
		else
		{
			lt = mid;
		}
	}
	
	if(a[rt] == x)
	{
		return rt;
	}
	return -1;
}

int main()
{
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	while(m--)
	{	
		int x;
		cin >> x;
		
		cout << check(x) << " ";
	}
	return 0;
}