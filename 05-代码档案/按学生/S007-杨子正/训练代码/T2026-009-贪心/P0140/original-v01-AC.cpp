#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e4 + 5;
struct node
{
    int a, b;
}a[N];
bool cmp(node x, node y) 
{
    return y.a - x.b < x.a - y.b;
}
signed main() 
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].a >> a[i].b;
    sort(a + 1, a + 1 + n, cmp);
    int ans = -1e18, sum = 0;
    for (int i = n; i >= 1; i--) 
    {
        ans = max(ans, sum - a[i].b);
        sum += a[i].a;
    }
    cout << ans;
    return 0;
}