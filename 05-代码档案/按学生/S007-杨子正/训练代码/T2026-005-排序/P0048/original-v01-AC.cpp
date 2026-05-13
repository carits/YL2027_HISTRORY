#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
const int kMaxN = 1e7 + 5;
long long a[kMaxN];

long long qs(long long* a, int l, int r, int k) 
{
    if (l == r) return a[l];
    int p = l + rand() % (r - l + 1);
    swap(a[p], a[r]);
    long long pv = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++) 
    {
        if (a[j] <= pv) 
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    int c = i + 1 - l + 1;
    if (c == k) return a[i + 1];
    else if (c > k) return qs(a, l, i, k);
    else return qs(a, i+2, r, k - c);
}

int main() {
    srand(time(0));
    int n, k;
    long long x, y;
    cin >> n >> k >> x >> y;
    a[0] = (1 * x + y) % MOD;
    for (int i = 1; i < n; i++) 
    {
        a[i] = (a[i - 1] * x + y) % MOD;
    }
    
    long long res = qs(a, 0, n - 1, k);
    cout << res << endl;
    return 0;
}