#include<bits/stdc++.h>
using namespace std;

int t, a, b;
string s;

void solve()
{
    cin >> a >> b >> s;
    int n = s.size();
    
    for(int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        if(s[i] != '?' && s[j] != '?' && s[i] != s[j])
        {
            cout << -1 << "\n";
            return;
        }
        if(s[i] == '?' && s[j] != '?')
        {
        	s[i] = s[j];
		}
        if(s[j] == '?' && s[i] != '?')
        {
        	s[j] = s[i];
		}
    }
    
    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0')
		{
			cnt0++;
		}
        if(s[i] == '1')
		{
			cnt1++;
		}
    }
    
    if(cnt0 > a || cnt1 > b)
    {
        cout << -1 << "\n";
        return;
    }
    
    a -= cnt0, b -= cnt1;
    
    for(int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        if(i > j)
		{
			break;
		}
        if(s[i] == '?' && s[j] == '?')
        {
            if(i == j)  
            {
                if(a >= 1)
                {
                    s[i] = '0';
                    a--;
                }
                else if(b >= 1)
                {
                    s[i] = '1';
                    b--;
                }
            }
            else  
            {
                if(a >= 2)
                {
                    s[i] = s[j] = '0';
                    a -= 2;
                }
                else if(b >= 2)
                {
                    s[i] = s[j] = '1';
                    b -= 2;
                }
            }
        }
    }
    
    if(a == 0 && b == 0)
    {
        cout << s << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}