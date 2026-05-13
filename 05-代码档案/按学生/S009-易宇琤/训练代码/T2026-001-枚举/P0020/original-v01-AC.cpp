#include <bits/stdc++.h>
using namespace std;

int n;
int ans;
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        int a, b, c;
        int cnt = 0;
        cin >> a >> b >> c;
        if(a == 1)
            cnt ++;
        if(b == 1)
            cnt ++;
        if(c == 1)
            cnt ++;
        if(cnt >= 2)
            ans ++;
    }
    cout << ans;
    return 0;
}