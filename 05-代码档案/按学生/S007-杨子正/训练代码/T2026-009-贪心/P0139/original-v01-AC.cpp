#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << "0\n";
        return ;
    }
    int cha = abs(a - b) + 1;
    cha /= 2;
    cha = ceil((double)(cha) / c);
    cout << cha << "\n";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}