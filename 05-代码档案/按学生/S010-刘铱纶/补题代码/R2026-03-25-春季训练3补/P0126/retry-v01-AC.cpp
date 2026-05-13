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
        
        int x = n, o = -1;
        while(x > 0)
        {
            if(x % 10 == 0 && o != -1)
            {
                n = 1;
                break;
            }
            o = x;
            x /= 10; 
        } 
        
        if(n % 10 == n)
        {
            cout << "No" << "\n";
            continue; 
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