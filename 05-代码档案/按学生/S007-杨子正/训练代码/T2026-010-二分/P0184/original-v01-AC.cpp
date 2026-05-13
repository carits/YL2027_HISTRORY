#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << min(min(a, b), (a + b + c) / 3) << "\n";
    }
    return 0;
}