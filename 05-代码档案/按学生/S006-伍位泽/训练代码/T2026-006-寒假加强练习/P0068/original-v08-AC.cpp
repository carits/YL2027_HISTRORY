#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , s , k , m;
    cin >> t;
    while (t--)
    {
        cin >> s >> k >> m;
        int sum=s;
        m%=k*2;
        for (int i=1;i<=m/k;i+=k)
        {
            sum-=k;
            if (sum<0)
            {
                sum=0;
            }
            sum=s-sum;
        }
        sum-=m%k;
        if (sum<0)
        {
            sum=0;
        }
        cout << sum << "\n";
    }
    return 0;
}