#include <bits/stdc++.h>
using namespace std;
string s , t;                                                                        
int main ( )
{
    int n , m , q , l , r;
    cin >> n >> m >> q >> s >> t;
    while (q--)
    {
        int cnt=0;
        cin >> l >> r;
        for (int i=l-1;i<=r-t.size ( );i++)
        {
            if (s.substring(i , t.size ( ))==t)
            {
                cnt++;
            }    
        }
        cout << cnt << "\n";
    }  
    return 0;
}