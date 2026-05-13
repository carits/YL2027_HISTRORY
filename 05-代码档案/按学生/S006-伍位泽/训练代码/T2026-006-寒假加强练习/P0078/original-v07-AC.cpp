#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n;
    long long x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        while (n--)
        {
            if ((x-1)%3==0&&(x-1)/3%2==1)
            {
                x=(x-1)/3;
            }
            else
            {
                x*=2;
            }
        }
        cout << x << "\n";
    }
    return 0;
}