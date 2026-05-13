#include<bits/stdc++.h>

using namespace std;

int n;
bool vis[10000005];

int main()
{
	cin >> n;
	for(int i = 2; i < 1e7; i++)
	{
		if(vis[i] == 0)
		{
			cout << i << " ";
			n--;
			if(n <= 0)
			{
				return 0;
			}
			for(int j = i * 2; j < 1e7; j += i)
			{
				vis[j] = 1;
			}
		}
	}
	return 0;
}