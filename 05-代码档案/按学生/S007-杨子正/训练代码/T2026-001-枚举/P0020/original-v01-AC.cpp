#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        bool a, b, c;
        cin >> a >> b >> c;
        if ((a == 1 && b == 1) || (b == 1 && c == 1) || (a == 1 && c == 1) || (a == 1 && b == 1 && c == 1))
            ans++;
    }
    cout << ans;
    return 0;
}