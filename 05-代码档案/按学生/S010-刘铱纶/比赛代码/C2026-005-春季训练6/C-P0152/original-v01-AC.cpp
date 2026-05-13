#include<bits/stdc++.h>

using namespace std;

int t, n;
string s1, s2;

void solve()
{
    cin >> n;
    cin >> s1 >> s2;
    
    int o = 1, sum = 0;
    
    for(int i = 0; i < n; i += o)
    {
        o = 1;
        
        if(s1[i] == s2[i])
        {
            if(s1[i] == '1')
            {
                if(s1[i + 1] == s2[i + 1] && s1[i + 1] == '0')
                {
                    o = 2;
                    sum += 2;
                }
            }    
            else
            {
                if(s1[i + 1] == s2[i + 1] && s1[i + 1] == '1')
                {
                    o = 2;
                    sum += 2; 
                }
                else
                {
                    sum++;
                }
            }
        }
        else
        {
            sum += 2;
        }
    } 
    
    cout << sum << "\n";
    
    return ;
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