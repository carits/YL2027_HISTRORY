#include<bits/stdc++.h>

#define int long long

using namespace std;

const int kN = 1000 + 5;
int n, a[kN];
map<int, int> t;
signed main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    sort(a + 1, a + 1 + n);
    
    int i = 1, j = n, maxi = -1e18;
    while(i <= j)
    {
        t[a[i] + a[j]]++;
        maxi = max(maxi, t[a[i] + a[j]]);
        i++, j--;
    }
    
    cout << maxi;
    return 0;
}