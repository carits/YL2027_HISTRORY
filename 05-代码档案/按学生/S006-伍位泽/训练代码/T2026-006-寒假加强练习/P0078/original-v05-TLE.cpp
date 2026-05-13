#include <bits/stdc++.h>
using namespace std;
int t , n , x;
bool abc (int v)
{
    while (n--)
    {
        if (v%2==0)
        {
            v/=2;
        }
        else
        {
            v=v*3+1;
        }
    }
    if (v==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int v=0;
        while (1)
        {
            v++;
            if (abc (v)==1)
            {
                cout << v << "\n";
                break;
            }
        }
    }
    return 0;
}