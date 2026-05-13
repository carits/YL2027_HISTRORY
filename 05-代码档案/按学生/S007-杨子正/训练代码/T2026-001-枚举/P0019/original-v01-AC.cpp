#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int main() 
{
    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ma = 0;
    for (int i = 1, j = n; i <= j; )
    {
        if (a[i] + a[j] <= t)
        {
            if (i != j)
                ma = max(ma, a[i] + a[j]);
            i++;
        }
        else
            j--;
    }
    cout << ma;
    return 0;
}