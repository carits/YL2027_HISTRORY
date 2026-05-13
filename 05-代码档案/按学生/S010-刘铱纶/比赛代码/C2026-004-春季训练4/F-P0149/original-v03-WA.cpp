#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, k, a[200005];
map<int, int> t;

signed main()
{
    cin >> n >> k;
    
    int maxi = -1e9, id = 0, y = k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i]; 
    }
    
    sort(a + 1, a + 1 + n);
    
    for(int i = 1; i <= n; i++)
    { 
        t[a[i]]++;
        if(t[a[i]] > maxi)
        {
            maxi = t[a[i]];
            id = a[i];
        }
    }
    
    if(maxi >= k)
    {
        cout << "0";
        return 0;
    }
    
    k -= maxi; 
    
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == id)
        {
            continue;
        }
        
        int x = a[i], cnt = 0;
        while(x > id) 
        {
            x /= 2;
            cnt++;
        }
        
        if(x == id)
        {
            ans += cnt;
            k--;
        }
        
        if(k == 0)
        {
            break;
        }
    }
    
    if(k != 0)
    {
        ans = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] % 2 == 1)
            {
                ans += (int)(a[i] / 2) + 1;
                y--;
            }
            
            if(y == 0)
            {
                break;
            }
        }
    }
    
    cout << ans;
    return 0;
}