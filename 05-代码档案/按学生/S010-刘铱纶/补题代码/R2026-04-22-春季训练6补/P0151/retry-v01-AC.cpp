#include<bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;

int n, a[N], dp[N], m[N];

int main()
{
    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    
    for(int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        
        for(int j = i - 1; j >= 1; j--)
        {
            if(a[j] * 2 >= a[i])
            {
                dp[i] = max(dp[i], m[j] + 1);
                break;
            }
        }
        
        m[i] = max(m[i], dp[i]);
    }
    
    int maxi = -1e9;
    
    for(int i = 1; i <= n; i++)
    {
        maxi = max(maxi, dp[i]);
//        cout << dp[i] << " "; 
    }
    
    cout << maxi;
    return 0;
} //