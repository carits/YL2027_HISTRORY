#include <bits/stdc++.h>
#define int long long
using namespace std;
int q, t, k, n;
string s;
int f(int t, int k)
{
    if (t == 0) return s[k - 1] - 'A';
    if (k == 1)
        return (s[0] - 'A' + t) % 3;
    int tot = (k % 2 == 1) ? 1 : 2;
    return (f(t - 1, (k + 1) / 2) + tot) % 3;
}
signed main()
{
    cin >> s;
    n = s.size();
    cin >> q;
    while (q--)
    {
        cin >> t >> k;
        cout << char(f(t, k) + 'A') << "\n";
    }
    return 0;
}