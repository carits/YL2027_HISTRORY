#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll n) 
{
    for (int e = 2; e <= 64; e++) 
    {
        ll l = 2, r = pow(n, 1.0 / e) + 2;
        while (l <= r) 
        {
            ll k = l + (r - l) / 2;
            __int128 sum = 1;
            __int128 t = 1;
            bool ov = false;
            for (int i = 1; i <= e; i++) 
            {
                t *= k;
                sum += t;
                if (sum > n) 
                {
                    ov = true;
                    break;
                }
            }
            if (ov || sum > n) 
                r = k - 1;
            else if (sum < n) 
                l = k + 1;
            else 
                return true;
        }
    }
    return false;
}
int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        ll n;
        cin >> n;
        if (check(n)) 
            cout << "YES\n"; //
        else 
            cout << "NO\n";
    }
    return 0;
}