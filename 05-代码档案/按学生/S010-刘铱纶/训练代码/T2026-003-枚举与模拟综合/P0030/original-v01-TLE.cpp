#include<bits/stdc++.h>

using namespace std;

const int kN=1e5+5;
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
        for(int j = i + 1; j <= n; j++)
        {
            if(a[i] * a[j] == i + j)
                cnt++;
        }
    }
    cout << cnt << "\n";
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