#include <bits/stdc++.h>
using namespace std;
string s , t;                                                                        
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m , q , l , r;
    cin >> n >> m >> q >> s >> t;
    while (q--)
    {
        int cnt=0;
        cin >> l >> r;
        for (int i=l-1;i<=r-m;i++)
        {
            if (s.substr(i , m)==t)
            {
                cnt++;
            }    
        }
        cout << cnt << "\n";
    }  
    return 0;
}