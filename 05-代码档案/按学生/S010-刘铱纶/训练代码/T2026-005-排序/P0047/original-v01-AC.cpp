#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, a[1000005], ans, b[1000005];

void f(int x, int y)
{
    if(x - y + 1 == 1)
    {
        return ;
    }
    int mid = (x + y) / 2;
    f(x, mid);
    f(mid + 1, y);
    int lt = x, rt = mid + 1, cnt = x;
    while(cnt <= y)
    {
        if(lt > mid)
        {
            b[cnt] = a[rt];
            rt++;
        }
        else if(rt > y)
        {
            b[cnt] = a[lt];
            lt++;
            ans += rt - mid - 1;
        }
        else if(a[lt] > a[rt])
        {
            b[cnt] = a[rt];
            rt++;
        }
        else
        {
            b[cnt] = a[lt];
            ans += rt - mid - 1;
//            cout << ans << "\n";
            lt++;
        }
        cnt++;
    }
    for(int i = x; i <= y; i++)
    {
        a[i] = b[i];
    }
} 
signed main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    f(1,n);
    cout << ans;
    return 0;
}