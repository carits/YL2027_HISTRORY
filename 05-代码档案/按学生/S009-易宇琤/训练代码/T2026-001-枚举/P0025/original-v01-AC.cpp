#include <bits/stdc++.h>
using namespace std;

int k, r;
int cnt;
int main()
{
    cin >> k >> r;
    while(1)
    {
        cnt ++;
        if((cnt * k) % 10 == r || (cnt * k) % 10 == 0)
        {
            cout << cnt;
            return 0;
        }
    }
    return 0;
}