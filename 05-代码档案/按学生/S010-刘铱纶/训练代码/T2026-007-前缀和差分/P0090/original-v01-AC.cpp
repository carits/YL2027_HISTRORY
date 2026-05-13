#include<bits/stdc++.h>

using namespace std;

int n, q, pre[100005];
string s;

int main()
{
	cin >> n >> q >> s;
	
	s = '#' + s;
	
	for(int i = 1; i <= n; i++)
	{
		pre[i] = pre[i - 1] + (s[i] - 'a' + 1);
	}
	int l, r;
	while(q--)
	{
		cin >> l >> r;
		cout << pre[r] - pre[l - 1] << "\n"; 
	}
	return 0;
}