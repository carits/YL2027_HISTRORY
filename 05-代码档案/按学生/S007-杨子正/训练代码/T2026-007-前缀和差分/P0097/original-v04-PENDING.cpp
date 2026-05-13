#include <bits/stdc++.h>
using namespace std;
const string kpos = "RGB";
int q, n, k;
string s;
void solve()
{
	cin >> n >> k >> s;
	int ans = n;
	for (int p = 0; p < 3; p++) 
    {
		int sum = 0;
		for (int i = 0; i < n; i++) 
        {
			sum += s[i] != kpos[(p + i) % 3];
			if (i + 1 >= k) 
            {
				ans = min(ans,sum);
				sum -= s[i - k + 1] != kpos[(p + i - k + 1) % 3]; //
			}
		}
	}
	cout << ans << '\n';
}

int main() 
{
	cin >> q;
	while (q--) 
		solve();
	return 0;
}