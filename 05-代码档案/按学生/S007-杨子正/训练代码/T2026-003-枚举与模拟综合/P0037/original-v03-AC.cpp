#include <bits/stdc++.h>

#define int long long

using namespace std;

const int kMaxN = 1e5 + 100;
const int kMaxPow = 32;
int n, a[kMaxN];
map<int, int> mp;
int pow2[kMaxPow + 1];

signed main() 
{
    pow2[0] = 1;
    for (int i = 1; i <= kMaxPow; i++)
    {
        pow2[i] = pow2[i - 1] * 2;
    }
    
    cin >> n;
    int ans = 0;
    for (int k = 1; k <= n; k++) 
    {
        cin >> a[k];
        for (int i = 1; i <= kMaxPow; i++) 
        {
            int target = pow2[i] - a[k];
            if (mp.find(target) != mp.end()) 
            {
                ans += mp[target];
            }
        }
        mp[a[k]]++;
    }
    
    cout << ans;
    return 0;
}