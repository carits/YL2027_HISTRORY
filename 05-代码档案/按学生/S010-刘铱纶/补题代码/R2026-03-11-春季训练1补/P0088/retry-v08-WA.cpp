#include<bits/stdc++.h>

#define int long long

using namespace std;

const int k1 = 100005;
const int k2 = 1000005;

int t, n, a[k1];
int b[k2];  

void init()
{
    for(int i = 2; i < k2; i++)
    {
        b[i] = i;
    }
    
    for(int i = 2; i * i < k2; i++)
    {
        if(b[i] == i) 
        {
            for(int j = i * i; j < k2; j += i)
            {
                if(b[j] == j) 
                {
                    b[j] = i;   
                }
            }
        }
    }
}

bool sushu(int x)
{
    if(x <= 1)
    {
        return 0;
    }
    return b[x] == x;
}

int ge(int x)
{
    int cnt = 0, last = -1;  
    while(x > 1)
    {
        if(b[x] != last)  
        {
            cnt++;
            last = b[x];
        }
        x = x / b[x];
    }
    return cnt;
}

signed main()
{
    init();
    
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)  
        {
            cin >> a[i];
        }
        
        bool v = 0;
		for(int i = 1; i < n; i++)
		{
			if(a[i] <= a[i + 1])
			{
				cout << "Bob" << "\n";
				v = 1;
				break;
			}
		}
		if(v == 1)
		{
			continue;
		}
        
        bool u = 0;
        for(int i = 1; i <= n; i++)
        {
            if(sushu(a[i]) == 0 && a[i] >= 3)
            {
                u = 1;
                break;
            }
        }
        
        if(u == 0)
        {
            cout << "Alice" << "\n";
            continue;
        }
        
        bool o = 0;
        for(int i = 1; i <= n; i++)  
        {
            if(sushu(a[i]) == 0 && a[i] > 1)  
            {
                int cnt = ge(a[i]);
                if(cnt >= 2)  
                {
                    o = 1;
                    break;
                }
            }
        }
    
        for(int i = 1; i < n; i++)
        {
        	if(ge(a[i]) == 1 && ge(a[i + 1]) == 1  && abs(a[i] - a[i + 1]) == 1)
        	{
        		o = 1;
			}
		}
		
		if(o == 1)
		{
			cout << "Ailce" << "\n";
		}
		else
		{
			cout << "Bob" << "\n";
		}
    }
    
    return 0;
}