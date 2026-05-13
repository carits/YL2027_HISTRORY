#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int k, q;
        cin >> k >> q;
        int minn = INT_MAX;
        while (k--)
        {
            int a;
            cin >> a;
            minn = min(minn, a);
        }
        while (q--)
        {
            int n;
            cin >> n;
            cout << min(minn - 1, n) << " ";
        }
        cout << "\n";
    }
    return 0;
}