#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5, mod = 1e9 + 7;
int a[N];
int main()
{
    int n;
    cin >> n;
    a[0] = 1;
    for (int i = 1; i < N; i++)
        a[i] = a[i - 1] * 2 % mod;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
    }
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        cout << a[x] << "\n";
    }
    return 0;
}