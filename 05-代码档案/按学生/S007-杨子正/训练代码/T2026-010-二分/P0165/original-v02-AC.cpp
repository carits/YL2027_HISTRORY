#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int a[N];
int main()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    while (q--)
    {
        int x;
        cin >> x;
        int l = 1, r = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] < x)
                l = mid + 1;
            else r = mid - 1;
        }
        if (a[l] == x)
            cout << l << " ";
        else cout << -1 << " ";
    }
    return 0;
} 