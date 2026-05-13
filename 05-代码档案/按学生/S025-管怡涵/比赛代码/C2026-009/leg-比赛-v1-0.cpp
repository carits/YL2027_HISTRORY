#include <bits/stdc++.h>
using namespace std ;
#define int long long
int n , m , a , b , c , d ;
int minn = 1e18 ;
void dfs(int x , int y , int sum)
{
    if(x < 1 || x > n || y < 1 || y > m) return ;
    if(x == n && y == m)
    {
        minn = min(minn , sum) ;
        return ;
    }
    int v = x + y ;
    if(v % 2 == 1)
    {
        dfs(x + 1 , y , sum + c) ;
        dfs(x , y + 1 , sum + d) ;
    }
    else
    {
        dfs(x + 1 , y , sum + a) ;
        dfs(x , y + 1 , sum + b) ;
    }
}
signed main()
{
    freopen("leg.in" , "r" , stdin) ;
    freopen("leg.out" , "w" , stdout) ;
    cin >> n >> m >> a >> b >> c >> d ;
    n++ , m++ ;
    dfs(1 , 1 , 0) ;
    cout << minn ;
return 0 ;
}
