#include <bits/stdc++.h>
using namespace std ;
int t , n , minn ;
int a[200005] , b[200005] ;
int sa[200005]  , sb[200005] ;
int ans[200005] ;
bool f[200005] ;
void dfs(int step , int cnt)
{
    if(cnt > minn) return ;
    if(step > n)
    {
        if(cnt < minn)
        {
            minn = cnt ;
            for(int i = 1 ; i <= n ; i++) ans[i] = b[i] ;
        } 
        return ;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(f[i] == false)
        {
            f[i] = true ;
            b[step] = i ;
            sb[step] = sb[step - 1] + i ;
            int w = 0 ;
            for(int j = 1 ; j <= i ; j++)
            {
                int x = sb[i] - sb[j - 1] ;
                int y = sa[i] - sa[j - 1] ;
                if(x == y) w++ ;
            } 
            dfs(step + 1 , cnt + w) ;
           f[i] = false ;
        }
    }
}
int main()
{
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        for(int i = 1 ; i <= n ; i++) 
        {
           cin >> a[i] ; 
           sa[i] = sa[i - 1] + a[i] ;
        }
        minn = INT_MAX ;
        dfs(1 , 0) ;
        for(int i = 1 ; i <= n ; i++) cout << ans[i] << ' ' ;
        cout << '\n' ;
    }
return 0 ;
}