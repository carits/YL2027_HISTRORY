#include<bits/stdc++.h>

#define int long long
 
using namespace std;
 
const int kN=2e5+5;
int t, n, a[kN];
 
void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        int o;
        if((i * 2 + 1) % a[i] == 0)
            o = i + 1;
        else
            o = i + 1 + (a[i] - (i * 2 + 1) % a[i]) % a[i]; 
        for(int j = o; j <= n; j += a[i])
        {
            if(a[i] * a[j] == i + j)
                cnt++;
        }
    }
    
    cout << cnt << "\n";
    return ;
}
signed main()
{
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}