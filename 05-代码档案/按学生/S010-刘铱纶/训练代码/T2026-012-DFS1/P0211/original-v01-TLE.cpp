#include<bits/stdc++.h>

using namespace std;

const int N = 1e8 + 5; 

int n;
bool v[N];

void init(int x)
{
	v[1] = 1;
	
	for(int i = 2; i * i <= x; i++)
	{
		if(v[i] == 0)
		{
			for(int j = i * i; j <= x; j += i)
			{
				v[j] = 1;
			}
		}
	}
	
	return ;
}

void dfs(int x, int sum) 
{ 
	if(v[sum] == 1)
	{
		return ;
	}
	
	if(x > n) 
	{
		cout << sum << "\n"; 
		return ;			
	}
	
	if(x == 1)
	{
		dfs(x + 1, sum * 10 + 2);
		dfs(x + 1, sum * 10 + 3);
		dfs(x + 1, sum * 10 + 5);
		dfs(x + 1, sum * 10 + 7);
	}
	else 
	{
		dfs(x + 1, sum * 10 + 1);	
		dfs(x + 1, sum * 10 + 3);
		dfs(x + 1, sum * 10 + 7);
		dfs(x + 1, sum * 10 + 9);
	}
	
	return ;
}

int main()
{ 
	cin >> n;
	
	int o = pow(10, n);
	init(o);
	
	dfs(1, 0);
	return 0;
}