#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int a[N];
int T;
int b[N];
int main() 
{
    cin >> T;
    while (T--) 
    {
        int n;
        cin >> n;
        for (int i = 1; i <= 2 * n; i++) 
            b[i] = 0;
        for (int i = 1; i <= n; i++) 
            cin >> a[i];
        int ans = 0;
        for (int i = 1; i <= n; i++) 
        {
            if (int(2 * n / a[i]) * a[i] == 2 * n) 
            {
                for (int j = 1; j < 2 * n / a[i]; j++) 
                    if (b[j] && i != b[j] && i + b[j] == a[i] * j)
                        ans++;
                b[a[i]] = i;
            }
            else 
            {
                for (int j = 1; j <= (2 * n / a[i]); j++) 
                    if (b[j] && i != b[j] && i+b[j] == a[i] * j)
                        ans++;
                b[a[i]] = i;
            }
        }
        cout << ans << "\n";
    }
  return 0;
}