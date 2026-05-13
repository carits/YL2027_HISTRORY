#include<bits/stdc++.h>
using namespace std;

int t, n, k;
map<int, int> a;

int main()
{
    int chang = 1;
    for(int i = 0; i <= 30; i++)
    {
        a[chang] = i;
        chang *= 2;
    }
    
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        
        int d = a[n];  
        int ans = 0;
        
        for(int len = 1; len <= d; len++)
        {
            for(int s = 1; s <= len; s++)
            {
                if(len + s - 1 > k)
                {
                    int m = len - 1, n = s - 1;
                    
                    if(n > m - n) 
					{
						n = m - n;
					}
                    
                    int cnt = 1;
                    for(int i = 1; i <= n; i++)
                    {
                        cnt = cnt * (m - n + i) / i;
                    }
                    
                    ans += cnt;
                }
            }
        }
        
        if(d + 1 > k)
        {
            ans++;
        }
        
        cout << ans << "\n";
    }
    return 0;
}