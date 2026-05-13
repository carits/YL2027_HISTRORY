#include<bits/stdc++.h>

#define int long long

using namespace std;

int t, n;

signed main()
{
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        
        int x = n, o;
        while(x > 0)
        {
            o = x;
            x /= 10; 
        } 
        
        if(o != 1)
        {
            cout << "No" << "\n";
        }
        else
        {
            if(n % 10 == 9)
            {
                cout << "No" << "\n";
            }
            else
            {
                cout << "Yes" << "\n";
            }
        }
    }
    return 0;
}