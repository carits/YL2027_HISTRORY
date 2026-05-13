#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int  N  = 1e5 + 10;
ll n,k,a,b,w[N];
ll f(ll l, ll r)// l和r区间要花多少能量 
{
    bool ok = false;
    int num =  (upper_bound(w + 1, w + k + 1, r) - w - 1) - (lower_bound(w + 1, w + k + 1, l) - w - 1); 
    if(num == 0) 
    {
        return a;
    }
    if(l == r)
    {
        return b;
    }
    else
    {
        return min(f(l, (l + r) / 2) + f((l + r)/ 2 + 1, r), b * (r - l + 1) * num);
    }
}
int main()
{
    cin >> n >> k >> a >> b;
    for(int i = 1; i <= k; i++)
    {
        cin >> w[i];
    }
    sort(w + 1, w + k + 1);
    cout << f(1, (1 << n));
    return 0;
}