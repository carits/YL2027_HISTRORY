#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int n, m;
    cin >> n >> m;
    string s,x;
    cin>>x>>s;
    int ans = 0;
    while (x.size()<m) 
 {
        x+=x;
        ans++;
    }
    if (x.find(s)!=-1) 
 {
        cout << ans << "\n";
        return ;
    }
    x += x;
    if (x.find(s)!=-1) 
 {
        cout << ans + 1 << "\n";
        return ;
    }
    cout << -1 << "\n";
 }
 int main() 
{
    int t;
    cin >> t;
    while (t--) 
 {
        solve();
    }
    return 0;
}