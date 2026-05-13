#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t , a , b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        long long maxn=-1;
        for (long long i=b;i>=1;i--)
        {
            if (b%i==0&&(a*i+b/i)%2==0)
            {
                maxn=max (maxn , (a*i+b/i));
            }
        }
        cout << maxn;
    }
    return 0;
}