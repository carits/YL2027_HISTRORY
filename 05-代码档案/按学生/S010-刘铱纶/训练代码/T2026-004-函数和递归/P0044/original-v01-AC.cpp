#include<bits/stdc++.h>
 using namespace std;
 int t, n;
int vis[100005];
string a;
 void solve()
{
    cin >> n >> a;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        memset(vis, 0, sizeof vis);
        int cnt = 0, maxi = -1e9;
        for(int j = i; j < min(i + 100, n); j++)
        {
            vis[a[j] - '0']++;
            if(vis[a[j] - '0'] == 1)
            {
                cnt++;
            }
            maxi = max(maxi, vis[a[j] - '0']);
            if(maxi <= cnt)
            {
                ans++;
            }
        }
    } 
    cout << ans << "\n";
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