#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, k, a[100005], pre[100005], b[100005], cnt;  
map<int, int> mp;  

signed main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }
    
    if(k == 1) 
	{
        b[++cnt] = 1;
    }
    else if(k == -1) 
	{
        b[++cnt] = 1;
        b[++cnt] = -1;
    }
    else 
	{
        int chang = 1;
        while(abs(chang) <= 1e15) 
		{
            b[++cnt] = chang;
            
            if(abs(chang) > 1e15 / abs(k)) 
			{
				break;
			}
            chang *= k;
        }
    }
    
   	int ans = 0;
    mp[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= cnt; j++)
        {
            ans = ans + mp[pre[i] - b[j]];  
        }
        
        mp[pre[i]]++;
    }
    
    cout << ans;
    return 0;
}