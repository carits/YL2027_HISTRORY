#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int  N  = 1e5 + 10;
ll n,k,a,b,w[N];
ll f(ll l, ll r)// l和r区间要花多少能量 
{
    bool ok=false;
    for(int i=2;i<=k;i++)
    {
        if(w[i]>r && w[i-1]<l)
        {
            ok=true;
            return a;
        }
    }
    if(r<w[1] || l>w[k])
    {
        return a;
    }
    if(l==r)
    {
        return b;
    }
    else
    {
        return f(l,(l+r)/2)+f((l+r)/2+1,r);
    }
}
int main()
{
    cin >> n >> k >> a >> b;
    for(int i = 1; i <= k; i++)
    {
        cin >> w[i];
    }
    cout << f(1, (1 << n));
    return 0;
}