#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
	cin >> n;
    vector<int> a(n + 5);
	for (int i = 1; i <= n; i++) 
        cin >> a[i];
	if (n == 1)
    {
	    cout << "0\n";
	    return ;
	}
    cout << n - 1 << "\n";
    cout << "1 " << n << "\n";
    int c = (a[1] + a[n]) % 2 ? a[1] : a[n];
    for (int i = 2; i < n; i++)
        if (c + a[i] & 1)
            cout << "1 " << i << "\n";
        else
            cout << i << " " << n << "\n";
    return ;
}
int main() 
{
	int T;
	cin >> T;
	while (T--)
		solve();
	return 0;
}