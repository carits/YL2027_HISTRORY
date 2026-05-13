#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, k, a[200005];
map<int, int> t;

signed main()
{
    cin >> n >> k;
    
    int maxi = 1e9, id = 0, y = k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i]; 
        t[a[i]]++;
    }
    
    bool v = 1;
    for(int x = 1; x <= n; x++)
    {
        id = a[x];
        k = y;
        k -= t[a[x]];
        if(k <= 0)
        {
            v = 0;
            maxi = 0;
            break;
        }
        
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] == id)
            {
                continue;
            }
            
            int x2 = a[i], cnt = 0;
            while(x2 > id) 
            {
                x2 /= 2;
                cnt++;
            }
            
            if(x2 == id)
            {
                ans += cnt;
                k--;
            }
            
            if(k <= 0)
            {
                break;
            }
            
            if(ans > maxi)
            {
                break;
            }
        }
        
        if(k <= 0)
        {
            v = 0;
            maxi = min(maxi, ans);
        } 
    } 
    
    if(v != 0)
    {
        maxi = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] % 2 == 1)
            {
                maxi += (int)(a[i] / 2) + 1;
                y--;
            }
            else
            {
                maxi += (int)(a[i] / 2);
                y--;
            }
            
            if(y == 0)
            {
                break;
            }
        }
    }
    
    cout << maxi;
    return 0;
}