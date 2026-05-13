#include <bits/stdc++.h>
using namespace std;
bool zs (int n)
{
    if (n<=1) return 0;
    for (int i=2;i<=sqrt (n);i++)
    {
        if (n%i==0) return 0;
    }
    return 1;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long a , b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        long long maxn=-1;
        if (zs(b)==0)
        {
            if ((a*b+1)%2==0)
            {
                cout << a*b+1 << "\n";
            }
            else if ((a+b)%2==0)
            {
                cout << a+b << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else
        {
            for (long long i=b;i>=1;i--)
            {
                if (b%i==0&&(a*i+b/i)%2==0)
                {
                    maxn=max (maxn , (a*i+b/i));
                    break;
                }
            }
            cout << maxn << "\n";
        }
    }
    return 0;
}