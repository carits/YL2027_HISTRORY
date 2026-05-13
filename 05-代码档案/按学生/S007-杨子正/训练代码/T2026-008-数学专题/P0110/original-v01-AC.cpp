#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main() 
{
    int t;
	for (cin >> t; t--;) 
    {
        int n;
		cin >> n;
        int ans = 0;
		for (int i = 1; i <= n; i++) 
            cin >> a[i];
		for (int i = 1; i < n - i + 1; i++) 
            ans = ans ? __gcd(ans, abs(a[i] - a[n - i + 1])) : abs(a[i] - a[n - i + 1]);
		cout << ans << "\n";
	}
    return 0;
}