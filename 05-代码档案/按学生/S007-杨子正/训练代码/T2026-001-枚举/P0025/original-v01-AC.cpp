#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int k, r;
    cin >> k >> r;
    for (int i = 1; i <= 1e7; i++)
    {
        long long mon = k * i;
        if ((mon - r) % 10 == 0)
        {
            cout << i;
            return 0;
        }
        if (mon % 10 == 0)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}