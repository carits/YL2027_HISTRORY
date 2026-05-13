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
        vector<int> a(n) , b(n) ;
        int i = 0 ;
        for (auto & x : a)
            cin >> x , b[i++] = x ;
        sort(b.begin(), b.end()) ;
        int t = true ;
        for (int i = 0 ; i < n ; i ++)
            if (a[i] != b[i])
            {
                t = false ;
                break ;
            }
        if (t)
        {
            cout << n << "\n" ;
            continue ;
        }
        cout << 1 << "\n"; //
    }
    return 0 ;
}