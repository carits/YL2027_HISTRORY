#include <bits/stdc++.h>
using namespace std ;
int n , x , maxn ;
int a[100005] , s[100005] ;
int zuidagongyinshu(int w , int h)
{
    int maxn = 0 ;
    for(int i = 1 ; i <= min(w , h) ; i++)
    {
        if(w % i == 0 && h % i == 0)
        {
            maxn = max(maxn , i) ;
        }
    }
}
void dfs(int step , int pos , int ans)
{
    if(step > x)
    {
        maxn = max(maxn , ans) ;
        return ;
    }
    for(int i = pos ; i <= n - (x - step) + 1 ; i++)
    {
        int x = s[i] - s[i - pos] ;
        int a ;
        if(ans == 0) a = x ;
        else a = zuidagongyinshu(x , ans) ;
        dfs(step + 1 , i + 1 , a) ;
    }
}
int main()
{
    freopen("friends.in" , "r" , stdin) ;
    freopen("friends.out" , "w" , stdout) ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++) 
    {
        cin >> a[i] ;
        s[i] = s[i - 1] + a[i] ;
    } 
    for(int i = 1 ; i <= n ; i++)
    {
        maxn = 0 ;
        x = i ;
        dfs(1 , 1 , 0) ;
        cout << maxn << ' ' ;
    }
return 0 ;
}
