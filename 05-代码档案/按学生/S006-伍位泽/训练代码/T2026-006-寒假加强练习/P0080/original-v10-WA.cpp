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
        long long maxn=-1;
        for (long long i=b;i>=sqrt (b);i--)
        {
            if (b%i==0&&(a*i+b/i)%2==0)
            {
                maxn=max (maxn , (a*i+b/i));
                break;
            }
        }
        cout << maxn << "\n";
    }
    return 0;
}