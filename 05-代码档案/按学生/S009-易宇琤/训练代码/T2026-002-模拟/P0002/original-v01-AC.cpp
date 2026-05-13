#include <bits/stdc++.h>
using namespace std;

const int N = 15;
int m;
int ans;
int a[N];
int main()
{
    for(int i = 1; i <= 10; i ++)
        cin >> a[i];
    cin >> m;
    for(int i = 1; i <= 10; i ++)
    {
        if(a[i] <= m)
            ans ++;
        else if(a[i] <= m + 30)
            ans ++;
    }
    cout << ans;
    return 0;
}