#include<bits/stdc++.h>
using namespace std ;
#define int long long
int n , m , sx , sy , ex , ey;
int vis[250][250];
int a[250][250];
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};
struct node
{
	int x ;
	int y ;
};
vector<node>ans;
bool check(int x , int y)
{
	return (x >= 1 && x <= n && y >= 1 && y <= m && vis[x][y] == 0 && a[x][y] != 0);
	
}
void print()
{
	cout << "("<< sx << ',' <<  sy << ")";
	for( int i = 0 ; i < ans.size() ; i++ )
	{
		cout << "->"<< '(' << ans[i].x << ',' << ans[i].y << ')' ;
	}
	cout << endl ;
	return ;
}
bool flag = 0 ;
void dfs(int x , int y)
{
	if( x == ex && y == ey)
	{
		print();
        flag = 1 ;
		return ;
	}
	for(int i = 0 ; i < 4 ; i++ )
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
		if(check(xx,yy))
		{
			ans.push_back({xx,yy});
			vis[xx][yy] = 1 ;
			dfs(xx,yy);
			ans.pop_back();
			vis[xx][yy] = 0 ;
			
		}
	}
    return ;
}
signed main()
{
	cin >> n >> m ;
	for( int i = 1 ; i <= n ; i++ )
	{
		for( int j = 1 ; j <= m ; j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> sx >> sy >> ex >> ey ; 
	vis[sx][sy] = 1 ;
	dfs(sx,sy);
    if( flag == 0)
    {
        cout << -1 ;
    }
	return 0 ;
} 
