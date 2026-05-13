#include<bits/stdc++.h>

#define int long long

using namespace std;

int a, b;

signed main()
{
    /*
        2x + 4y = a;
        4x + 6y = b;
        4x + 8y = 2a;
        y = (2a - b) / 2;
        x = (a - 4y)/2
    */
    
    cin >> a >> b;
    
    int y =  (2 * a - b) / 2, x = (a - 4 * y) / 2;
    
    if(x >= 0 && y >= 0 && (2 * a - b) % 2 == 0 && (a - 4 * y) % 2 == 0)
    {
        cout << x << " " << y;
    }
    else
    {
        cout << "Impossible!";
    }
    return 0;
}