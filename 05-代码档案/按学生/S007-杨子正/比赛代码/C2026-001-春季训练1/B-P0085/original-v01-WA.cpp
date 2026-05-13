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
        vector<bool> vis(n) ;
        int nn = n ;
        for (int i = 1 ; i <= n ; i ++)
        {
            bool t = true ;
            for (int j = 1 , k = 0 ; j < n ; j ++ , k ++)
            {
                if (vis[j] == true)
                    j ++ ;
                if (vis[k] == true)
                    j ++ , k ++ ;
                if (!(a[j - 1] <= a[j]))
                {
                    t = false ;
                    break ;
                }
            }
            if (t)
            {
                cout << nn << "\n";
                break ;
            }
            int maxx = 0 , id ;
            for (int j = 0 ; j < n ; j ++)
                if (a[j] > maxx)
                    maxx = a[j] , id = j ;
            nn -- ;
            vis[id] = true;
        }
    }
    return 0 ;
}