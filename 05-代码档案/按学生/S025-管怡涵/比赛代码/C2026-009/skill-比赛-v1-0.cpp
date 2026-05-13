#include <bits/stdc++.h>
using namespace std ;
int n , m ;
int main()
{
    freopen("" , "r" , stdin) ;
    freopen("" , "w" , stdout) ;
    cin >> n >> m ;
    if(n == 1)
    {
        cout << 20 ;
    }
    if(n == 2)
    {
        if(m < 3) cout << 20 ;
        if(m == 3) cout << 10 ;
        if(m == 4) cout << 30 ;
        if(m == 5) cout << 20 ;
    }
    if(n == 3)
    {
        if(m < 3) cout << 25 ;
        if(m == 3) cout << 30 ;
        if(m == 4) cout << 20 ;
    }
    if(n == 4)
    {
        if(m < 4)  cout << 15 ;
        else if(m < 6) cout << 10 ;
        else if(m == 6) cout << 15 ;
        else cout << 20 ;
    }
return 0 ;
}
