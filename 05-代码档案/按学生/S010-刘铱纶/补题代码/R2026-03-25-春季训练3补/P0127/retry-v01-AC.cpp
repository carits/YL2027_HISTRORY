#include <bits/stdc++.h>

#define int long long

using namespace std;
 
int t, n, a[200005], pre[200005];

signed main() 
{ 
    cin >> t;
    
    while(t--)
    { 
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pre[i] = pre[i - 1] + a[i];
        }
        //
        int maxi = 0, id = -1;
        for(int i = n; i >= 1; i--)
        {
            if(pre[i] < maxi)
            {
                maxi = pre[i];
                id = i;
            }
        }
        
        if(id == -1)
        {
            cout << pre[n] << "\n";
        }
        else
        {
            int sum = 0;
            for(int i = 1; i <= n; i++)
            {
                if(i <= id)
                {
                   sum -= a[i]; 
                }
                else
                {
                    sum += a[i];
                }
            }
            
            cout << sum << "\n";
        }
    }
    return 0;
}