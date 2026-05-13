#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5, SUM = 9e5 + N;
int a[N], s[SUM];
int main() 
{
    int t;
    cin >> t;
    while (t--) 
	{
        memset(s, 0, sizeof s);
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) 
		{
            char c;
            cin >> c;
            a[i] = a[i - 1] + (c - '0');
        }
        long long ans = 0;
        s[n]++;
        for (int i = 1; i <= n; i++) 
		{
            a[i] -= i;
            s[a[i] + n]++;
            ans += s[a[i] + n] - 1;
        }
        cout << ans << '\n';
    }
	return 0;
}