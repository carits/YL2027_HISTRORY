#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int a[N];
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            int ma = 0;
            for (int j = 1; j <= n; j++)
                if (i != j)
                    ma = max(ma, a[j]);
            cout << a[i] - ma << ' ';
        }
        cout << '\n';
    }
    return 0;
}