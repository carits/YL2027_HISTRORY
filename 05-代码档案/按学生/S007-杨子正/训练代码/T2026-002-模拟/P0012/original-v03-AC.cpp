#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int a[N];
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--) 
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) 
            cin >> a[i];
        long long max1 = LLONG_MIN;
        long long max2 = LLONG_MIN;
        int cnt = 0;
        for (int i = 1; i <= n; i++) 
        {
            if (a[i] > max1) 
            {
                max2 = max1;
                max1 = a[i];
                cnt = 1;
            } else if (a[i] == max1) 
                cnt++;
            else if (a[i] > max2) 
                max2 = a[i];
        }
        for (int i = 1; i <= n; i++) 
        {
            long long res;
            if (a[i] != max1 || cnt > 1) 
                res = 1LL * a[i] - max1;
            else
                res = 1LL * a[i] - max2;
            cout << res << ' ';
        }
        cout << '\n';//
    }
    return 0;
}