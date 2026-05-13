#include <bits/stdc++.h>
using namespace std ;
int p[200005] ;
vector<int> c ;
void solve() 
{
    c.clear() ;
    int n , x , y ;
    cin >> n >> x >> y ;
    for (int i = 1 ; i <= n ; i ++) 
        cin >> p[i] ;
    if (x > y)
        swap(x , y) ;
    x++ ;
    int minn = 1e9 , w ;
    for (int i = x ; i <= y ; i ++) 
        if (p[i] < minn) 
        {
            minn = p[i] ;
            w = i ;
        }
    for (int i = x ; i <= y ; i++) 
    {
        c.push_back(p[w]) ;
        w ++ ;
        if (w == y + 1) w = x ;
    }
    bool out = 0 ;
    for (int i = 1 ; i <= n ; i++) 
    {
        if (i == x) i = y + 1 ;
        if (i > n) break ;
        if (p[i] < c[0] || out) 
            cout << p[i] << ' ' ;
        else 
        {
            for (auto P : c) 
                cout << P << ' ' ;
            out = 1 ;
            cout << p[i] << ' ' ;
        }
    }
    if (out == 0) 
        for (auto P : c) 
            cout << P << ' ' ;
    cout << endl ;
}
signed main() 
{
    int t ;
    cin >> t ;
    while (t--) 
        solve() ;
    return 0 ;
}