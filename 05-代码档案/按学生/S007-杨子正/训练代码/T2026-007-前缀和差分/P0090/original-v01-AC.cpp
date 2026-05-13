#include <bits/stdc++.h>
using namespace std;
int p[100005]; 
int main()
{
    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
    {
    	char c;
    	cin >> c;
    	p[i] = p[i - 1] + (c - 'a' + 1);
	}
	int l, r;
	while (cin >> l >> r)
	{
		cout << p[r] - p[l - 1] << "\n";
	}
	return 0;
}