#include<bits/stdc++.h>
using namespace std ;
#define int long long
int n , m ;
int vis[250][250];
int a[250][250];
int dx[]={0,1};
int dy[]={1,0};
struct node
{
	int x ;
	int y ;
};
int ans=0;
map<int,int>mp;
bool check(int xx,int yy)
{
	return (xx >= 1 && xx <= n && yy >= 1 && yy <= m && vis[xx][yy] == 0 && mp[a[xx][yy]]==0);
}
void dfs(int x,int y)
{
	if( x == n && y == m)
	{
		ans++;
		return ;
	}
	for(int i = 0 ; i < 4 ; i++ )
	{
		int xx = x + dx[i];
		int yy = y + dy[i];
		if(check(xx,yy))
		{
			mp[a[xx][yy]]++;
			vis[xx][yy] = 1 ;
			dfs(xx,yy);
			vis[xx][yy] = 0 ;
			mp[a[xx][yy]]--;
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
	mp[a[1][1]]=1;
	vis[1][1] = 1 +1-1;
	dfs(1,1);
   	cout<<ans;
	return 0 ;
}