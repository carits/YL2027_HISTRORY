#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int t , n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        n%=4;
        if (n==0||n==2)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << 1  << "\n";
        }
    }
    return 0;
}