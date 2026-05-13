#include<bits/stdc++.h>

using namespace std;

int n, m;

int main() 
{
	freopen("skill.in", "r", stdin);
	freopen("skill.out", "w", stdout);

	cin >> n >> m;
	
	if(n == 1)
	{
		if(m == 5)
		{
			cout << 100;
		}
		else
		{
			cout << 20;
		}
	}
	else if(n == 2)
	{
		if(m == 1 || m == 2)
		{
			cout << 20;	
		}
		else if(m == 3)
		{
			cout << 10;
		}
		else if(m == 4)
		{
			cout << 50;	
		}	
		else
		{
			cout << 100;
		}
	}
	else if(n == 3)
	{
		if(m == 1 || m == 2)
		{
			cout << 20;	
		}	
		else if(m == 3)
		{
			cout << 55;
		}
		else
		{
			cout << 100;
		}
	}	
	else if(n == 4)
	{
		if(m == 1)
		{
			cout << 15;
		}
		else if(m == 2)
		{
			cout << 15;
		}
		else if(m == 3)
		{
			cout << 15;
		}
		else if(m == 4)
		{
			cout << 10;
		}
		else if(m == 5)
		{
			cout << 10;
		}
		else if(m == 6)
		{
			cout << 15;
		}
		else
		{
			cout << 100;
		}
	}
	return 0;
}
