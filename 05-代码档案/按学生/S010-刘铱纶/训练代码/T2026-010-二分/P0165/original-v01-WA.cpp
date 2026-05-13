#include<bits/stdc++.h>

using namespace std;

int n, m;

struct Node
{
	int x, id;
}a[100005];

int check(int x)
{
	int lt = 0, rt = n + 1;
	
	while(lt + 1 < rt)
	{
		int mid = (lt + rt) / 2;
		
		if(a[mid].x >= x)
		{
			rt = mid;
		}
		else
		{
			lt = mid;
		}
	}
	
	if(a[rt].x == x)
	{
		return a[rt].id;
	}
	return -1;
}

int main()
{
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i].x;
		a[i].id = i;
	}
	
	while(m--)
	{
		int x;
		cin >> x;
		
		cout << check(x) << " ";
	}
	return 0;
}