#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n,k;
    cin>>n>>k;
    if(k>=240)
    {
        cout<<0;
        return 0;
    }
    int sum=240-k;
    for(int i=1;i<=n;++i)
    {
        if(sum>=i*5)
        {
            sum-=i*5; 
        }
        else
        {
            cout<<i-1;
            return 0;
        } 
    }
    cout<<n;
    return 0;
}