#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = sqrt(n);
    if (m * m == n)
        cout << m * 2;
    else if (m * (m + 1) >= n)
        cout << m + m + 1;
    else
        cout << (m + 1 * 2);
    return 0;
}