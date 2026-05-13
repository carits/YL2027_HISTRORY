#include<bits/stdc++.h>

using namespace std;

int n, a, b, w[500005];

bool cmp(int s1, int s2)
{
	return s1 > s2;
}

int check(int x)
{
	int sum = 0;
	
	for(int i = 1; i <= n; i++)
	{
		if(w[i] > a * x)
		{
			sum += ceil((w[i] - a * x) * 1.0 / b);
		}
	}
	
	return sum <= x;
}

int main()
{
	cin >> n >> a >> b;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> w[i];
	}
	sort(w + 1, w + 1 + n, cmp);
	
	int lt = -1, rt = 5e5 + 1;
	
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