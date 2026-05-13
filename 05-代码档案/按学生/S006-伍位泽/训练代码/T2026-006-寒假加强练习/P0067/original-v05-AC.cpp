#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int t , n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n==2)
        {
            cout << 2 << "\n";
        }
        else if (n==3)
        {
            cout << 3 << "\n";
        }
        else
        {
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
    }
    return 0;
}