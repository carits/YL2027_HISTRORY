#include<bits/stdc++.h>

#define int long long

using namespace std;

int q;
int k, n, a, b;

bool check(int x)
{
	int h = x * a;
	
	if(h > k)
	{
		return 0;
	} 
	
	h = k - h;
	
	int g = h / b;
	
	if(h % b == 0)
	{
		g--;
	}
	
	if(x + g >= n)
	{
		return 1;
	}
	
	return 0;
}

signed main()
{
	cin >> q;
	
	while(q--)
	{
		cin >> k >> n >> a >> b;
		
		int o = k / b;
		if(k % b == 0)
		{
			o--;
		}
		
		if(o < n)
		{
			cout << -1 << "\n";
		}
		else
		{
			int lt = 0 - 1, rt = n + 1;
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
			
			cout << lt << "\n";
		}
	}
	
	return 0;
}