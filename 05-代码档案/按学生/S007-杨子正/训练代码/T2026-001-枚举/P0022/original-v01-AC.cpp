#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int k, n, w;
    cin >> k >> n >> w;
    long long mon = 0;
    for (int i = 1; i <= w; i++)
        mon += k * i;
    if (n >= mon)
        cout << 0;
    else
        cout << mon - n;
    return 0;
}