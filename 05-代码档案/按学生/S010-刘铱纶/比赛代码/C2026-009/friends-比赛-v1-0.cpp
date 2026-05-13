#include<bits/stdc++.h>

using namespace std;

int n;

int main() 
{
	freopen("friends.in", "r", stdin);
	freopen("friends.out", "w", stdout);
	
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		int x;
		cin >> x; 
	}
	
	for(int i = 1; i <= n; i++)
	{
		int o = n / i;
		cout << o << " ";
	}
	return 0;
}
