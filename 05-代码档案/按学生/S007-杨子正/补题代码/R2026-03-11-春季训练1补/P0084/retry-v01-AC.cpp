#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;
    while (T--)
    {
        int n ;
        cin >> n ;
        vector<int> a(n) ;
        for (auto & x : a)
            cin >> x ;
        int maxx = 0 , ans = 0 ;
        for (auto x : a) 
            maxx = max(x , maxx) ;
        for (auto x : a) 
            ans += x == maxx ;
        cout << ans << "\n" ; //
    }
    return 0 ;
}