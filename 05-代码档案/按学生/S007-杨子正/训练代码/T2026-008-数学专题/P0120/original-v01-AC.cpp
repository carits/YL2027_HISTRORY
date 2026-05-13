#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) 
            return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (check(n))
    {
        cout << 1 << "\n" << n << "\n";
        return 0;
    }
    if (check(n - 2))
    {
        cout << 2 << "\n" << 2 << " " << n - 2 << "\n";
        return 0;
    }
    n = n - 3;
    for (int i = 3; i <= n; i += 2)
        if (check(i) && check(n - i))
        {
            cout << 3 << "\n" << 3 << " " << i << " " << n - i << "\n";
            return 0;
        }
    return 0;
}