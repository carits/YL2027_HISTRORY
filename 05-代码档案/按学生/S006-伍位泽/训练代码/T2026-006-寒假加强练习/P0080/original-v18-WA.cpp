#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long a , b;
    cin >> t;
    bool v=0;
    while (t--)
    {
        v=0;
        cin >> a >> b;
        for (int i=sqrt (a*b);i>=1;i--)
        {
            if (a*b%i==0&&i+a*b/i%2==0)
            {
                cout << a*b/i+i << "\n";
                v=1;
            }
        }
        if (v==0)
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}