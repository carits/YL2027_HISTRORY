#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int t , x;
    long long n;
    cin >> t;
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (t--)
    {
        int cnt=0;
        cin >> n >> x;
        if (n<8)
        {
            n*=2;
            x--;
            if (x==0)
            {
                cout << n << "\n";
            }
        }
        if (n>=4&&x>=1)
        {
            while (1)
            {
                cnt++;
                if (x==0)
                {
                    cout << n << "\n";
                    break;
                }
                if ((n-1)%3==0&&cnt%2==0)
                {
                    n=(n-1)/3;
                }
                else
                {
                    n*=2;
                }
                x--;
            }
        }
    }
    return 0;
}