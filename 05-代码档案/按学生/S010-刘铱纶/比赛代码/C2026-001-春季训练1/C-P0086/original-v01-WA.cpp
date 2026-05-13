#include<bits/stdc++.h>

using namespace std;

int q, n;
string s;
map<char, int> t;

int main()
{
    cin >> q;
    while(q--)
    {
        cin >> n >> s;
        t.clear();
        for(int i = 0; i < n; i++)
        {
            t[s[i]]++;
        }
        
        bool v = 0;
        for(int i = 0; i < n; i++)
        {
            if(t[s[i]] % 2 != 0)
            {
                cout << "NO" << "\n";
                v = 1;
                break;
            }
        }
        
        if(v == 1)
        {
            continue;
        } 
        
        for(int i = 2; i < n - 1; i++)
        {
            if(s[i] == s[i + 1])
            {
                cout << "YES" << "\n";
                v = 1; 
                break;
            }
        }
        
        if(v == 0)
        {
            cout << "NO" << "\n";
        } 
    }
    return 0;
}