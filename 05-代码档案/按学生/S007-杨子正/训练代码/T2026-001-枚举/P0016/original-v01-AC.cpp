#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 100; i <= 999; i++)
    {
        int sum = (i / 100 % 10) + (i / 10 % 10) + (i % 10);
        if (sum == n)
            cnt++;
    }
    cout << cnt;
    return 0;
}