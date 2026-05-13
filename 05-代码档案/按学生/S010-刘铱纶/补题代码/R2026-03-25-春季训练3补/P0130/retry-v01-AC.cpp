#include<bits/stdc++.h>

#define int long long

using namespace std;

int t, x, y;

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    } 
    return gcd(b, a % b);
}

signed main()
{
    cin >> t;
    
    while(t--)
    {
        cin >> x >> y;
        
        int o = -1;
        for(int i = x + 1; i <= y - 1; i++)
        {
            if(gcd(x, i) == 1 && gcd(y, i) == 1)
            {
                o = i;//
                break;
            }
        }
        
        cout << o << "\n";
    }
    return 0;
}