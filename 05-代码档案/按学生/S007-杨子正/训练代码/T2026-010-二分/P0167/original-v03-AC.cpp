#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long minn = LLONG_MAX;
    for (long long a = 1; a * a <= n; a++)
    {
        long long b = (n + a - 1) / a;
        minn = min(minn, a + b);
    }
    cout << minn;
    return 0;
}