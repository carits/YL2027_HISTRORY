#include <bits/stdc++.h>
using namespace std ;
int ax , ay , bx , by , k ;
bool flag ;
int ans[50000][2] ;
int a[17][17] ;
bool f[17][17] ;
int cx[5] = {0 , -1 , 0 , 1} ;
int cy[5] = {-1 , 0 , 1 , 0} ;
void dfs(int x , int y)
{
    if(x == bx && y == by)
    {
        flag = true ; 
    	for(int h = 0 ; h <= k - 1 ; h++) cout << "(" << ans[h][0] << "," << ans[h][1] << ")" << "->" ; 
    	cout << "(" << bx << "," << by << ")" << '\n' ;
        return ;
    }
    for(int i = 0 ; i < 4 ; i++)
    {
        if(a[x + cx[i]][y + cy[i]] == 1 && f[x + cx[i]][y + cy[i]] == 0)
    	{
 	        f[x][y] = 1 ;
 	        ans[k][0] = x ;
            ans[k][1] = y ;
            k++;
        	dfs(x + cx[i] , y + cy[i]) ;
        	f[x][y] = 0 ;
       	    k-- ;
      	}
    }
}
int main()
{
    int m , n ;
    cin >> m >> n ;
    for(int i = 1 ; i <= m ; i++)
    {
    	for(int j = 1 ; j <= n ; j++)
    	{
    		cin >> a[i][j] ;
    	}
    }
    cin >> ax >> ay >> bx >> by ;
    dfs(ax , ay) ;
    if(flag == false) cout << "-1" ;
return 0 ;
}