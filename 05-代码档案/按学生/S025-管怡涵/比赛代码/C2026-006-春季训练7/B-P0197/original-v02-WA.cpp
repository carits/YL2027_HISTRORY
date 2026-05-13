#include <bits/stdc++.h>
using namespace std ;
int t , n , minn ;
int a[200005] ;
int main()
{
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        for(int i = 1 ; i <= n ; i++) cin >> a[i] ; 
        for(int i = 2 ; i <= n ; i++) cout << a[i] << ' ' ;
        cout << a[1] ;
    }
return 0 ;
}