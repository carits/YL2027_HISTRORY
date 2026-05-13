#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main() 
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    if (n == 1) 
    {
        cout << "-1\n";
        return 0;
    }
    int d = a[2] - a[1];
    if (a[1] == a[n]) 
    {
        cout << "1\n" << a[1] << "\n";
        return 0;
    }
    if (n == 2) 
    {
        if ((a[1] + a[2]) % 2) cout << "2\n" << a[1] - d << " " << a[2] + d << "\n";
        else cout << "3\n" << a[1] - d << " " << (a[1] + a[2]) / 2 << " " << a[2] + d << "\n";
        return 0;
    }
    int c1 = 1, c2 = 1, td1 = a[3] - a[2];
    if (td1 != d) 
    {
        for (int i = 4; i <= n; i++) 
        {
            int td = a[i] - a[i - 1];
            if (td == td1) c2++;
            else c1++;
            if (c1 >= 2 || c2 >= 2) break;
        }
    }
    if (c2 >= c1 && n >= 3 && d > td1) d = td1;
    int cnt = 0, ans = 0;
    for (int i = 2; i <= n; i++) 
    {
        int td = a[i] - a[i - 1];
        if (d != td) 
        {
            cnt++;
            if ((a[i - 1] + a[i]) % 2 || a[i - 1] + 2 * d != a[i]) 
            {
                cnt++;
                break;
            }
            else ans = a[i - 1] + d;
        }
    }
    if (!cnt) cout << "2\n" << a[1] - d << " " << a[n] + d << "\n";
    else if (cnt == 1) cout << "1\n" << ans << "\n";
    else cout << "0\n";
    return 0;
}