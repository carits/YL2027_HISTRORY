#include <bits/stdc++.h>
using namespace std;
int a[1005] , b[1005];
string s , t;                                                                        
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m , q , l , r;
    cin >> n >> m >> q >> s >> t;
    int sum=1;
    for (int i=0;i<=n-m;i++)
    {
        if (s.substr (i , m)==t) 
        {
            a[sum]=i , b[sum]=i+m-1;
            sum++;
        }
    }          
    while (q--)
    {
        int cnt=0;
        cin >> l >> r;
        for (int i=1;i<=sum;i++)
        {
            if (a[i]>=l&&b[i]<=r)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }  
    return 0;
}