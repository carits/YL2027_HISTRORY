#include <bits/stdc++.h>
using namespace std;
int a[55];
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, x, y;
        cin >> n >> x >> y;
        int diff = y - x;
        int d = diff;
        for (int i = diff; i >= 1; i--) 
            if (diff % i == 0 && diff / i + 1 <= n) 
            {
                d = i;
                break;
            }
        int idx = 1;
        for (int i = y; i >= 1 && idx <= n; i -= d) 
            a[idx++] = i;
        for (int i = y + d; idx <= n; i += d) 
            a[idx++] = i;
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++) 
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}