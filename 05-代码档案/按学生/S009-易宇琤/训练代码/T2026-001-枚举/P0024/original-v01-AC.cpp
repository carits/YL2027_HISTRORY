#include <bits/stdc++.h>
using namespace std;

int n, k;
int ans;
int main()
{
    cin >> n >> k;
    k = 240 - k;
    for(int i = 1; i <= n; i ++)
        if(k - i * 5 >= 0)
        {
            k -= i * 5;
            ans ++;
        }
    cout << ans;
    return 0;
}