#include <bits/stdc++.h>
using namespace std ;
int t , n , cnt ;
int a[55] ;
bool f[55] ;
void dfs(int step)
{
    if(cnt == n) return ;
    if(step > n)
    {
        for(int i = 1 ; i <= n ; i++) cout << a[i] << ' ' ;
        cout << '\n' ;
        cnt++ ;
        return ;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(f[i] == false)
        {
            if(step >= 3 && a[step - 1] + a[step - 2] == i) continue ;
            a[step] = i ;
            f[i] = true ;
            dfs(step + 1) ;
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
        cnt = 0 ;
        dfs(1) ;
    }
return 0 ;
}