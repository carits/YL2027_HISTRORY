#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int n, t;
int ans;
int a[N];
int main()
{
    cin >> n >> t;
    for(int i = 1; i <= n; i ++)
        cin >> a[i];
    for(int i = 1, j = n; i < j; )
        if(a[i] + a[j] > t)
            j --;
        else
        {
            ans = max(ans , a[i] + a[j]);
            i ++;
        }
    cout << ans;
    return 0;
}