#include<bits/stdc++.h>

using namespace std;

int t, n;
string s;
map<char, int> mp;

int main()
{
    cin >> t;//
    
    while(t--)
    {
        cin >> n >> s;
        
        bool v = 0;
        mp.clear();
        for(int i = 1; i < n - 1; i++)
        {
            mp[s[i]]++;
            if(mp[s[i]] >= 2)
            {
                v = 1;
                break;
            }
        }   
        
        if(v == 0)
        {
            if(mp[s[0]] >= 1 || mp[s[n - 1]] >= 1)
            {
                v = 1;
            }
        }
        
        if(v == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}