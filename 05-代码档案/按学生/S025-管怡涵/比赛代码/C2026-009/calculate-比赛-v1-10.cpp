#include <bits/stdc++.h>
using namespace std ;
int n , b , c ;
int a[100005] ;
int main()
{
    freopen("calculate.in" , "r" , stdin) ;
    freopen("calculate.out" , "w" , stdout) ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++) cin >> a[i] ;
    cin >> b >> c ;
    cout << b * c ;
return 0 ;
}
