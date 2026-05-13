#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    long long k , n , w;
    cin >> k >> n >> w;
    long long x=(1+w*)w/2*k;
    if (x<=n)
    {
        cout << 0;
    }
    else
    {
        cout << x-n;
    }
    return 0;
}