#include <bits/stdc++.h>
using namespace std;

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
        unsigned long long maxn=-1;
        for (long long i=sqrt (b);i>=1);i--)
        {
            if (b%i==0&&(a*i+b/i)%2==0)
            {
                maxn=max (maxn , (a*i+b/i));
                break;
            }
            else if (b%i==0&&(a*(b/i)+i)%2==0)
            {
                maxn=max (maxn , (a*(b/i)+i));
            }
        }
        cout << maxn << "\n";
    }
    return 0;
}