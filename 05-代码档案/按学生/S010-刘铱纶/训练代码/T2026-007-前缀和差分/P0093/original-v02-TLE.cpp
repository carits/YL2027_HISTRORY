#include<bits/stdc++.h>

using namespace std;

int n, pre1[100005], pre0[100005];
string s;

int main()
{
	cin >> n >> s;
	s = '#' + s;
	for(int i = 1; i <= n; i++)
	{
		if(s[i] == '0')
		{
			pre0[i] = pre0[i - 1] + 1;
			pre1[i] = pre1[i - 1];
		}
		else
		{
			pre1[i] = pre1[i - 1] + 1;
			pre0[i] = pre0[i - 1];
		}
	}
	
	int maxi = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{
			if(pre0[j] - pre0[i - 1] == pre1[j] - pre1[i - 1])
			{
				maxi = max(maxi, j - i + 1);
			}
		}
	}
	
	cout << maxi;
	return 0; 
}