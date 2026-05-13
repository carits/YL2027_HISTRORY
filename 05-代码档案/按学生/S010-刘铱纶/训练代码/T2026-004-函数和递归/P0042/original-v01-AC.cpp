#include<bits/stdc++.h>

using namespace std;

int t, n;

void solve()
{
    cin >> n;
    int ans = 3;
    for(int i = 1; i <= n; i++)
    {
        ans = (ans - 1) * 2;
    }
    cout << ans << "\n";
    return ;
}

int main()
{
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}