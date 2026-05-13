#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, x, ans, p[300005], v[200005];
signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        priority_queue<int, vector<int>, greater<int> > q;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        for (int i = 1; i <= n; i++)
            cin >> p[i];
        ans = 0;
        for (int i = n; i > 0; i--)
        {
            q.push(v[p[i]]);
            while (q.size() > i)
                q.pop();
            if (q.size() >= i && q.top() * i >= ans)
            {
                ans = q.top() * i;
                x = i;
            }
        }
        cout << ans << " " << x << "\n";
    }
    return 0;
}