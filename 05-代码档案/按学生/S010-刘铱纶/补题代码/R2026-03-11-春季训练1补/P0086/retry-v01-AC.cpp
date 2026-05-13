#include<bits/stdc++.h>

using namespace std;

int t, n;
string s;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        stack<int> stk;
        for(int i = 0; i < n; i++)
        {
            if(stk.size() > 0 && s[i] == stk.top())
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }//
        }
        
        if(stk.empty() == 0)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    } 
    return 0;
}