#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
bool vis[N];
void init()
{
	int last, p;
	for (int i = 2; i <= 1000; i++)
    {
		last = i, p = i + 1;
		while (true)
        {
			last *= i;
			p += last;
			if (p > N - 1) 
                break;
			vis[p] = true;
		}
	}
}
void solve()
{
	int n;
	cin >> n;
	if (vis[n]) cout << "YES\n";
	else cout << "NO\n"; //
}
int main()
{
    init();
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}