#include<bits/stdc++.h>

using namespace std;

int cx, cy, mx, my;
char c, m;
bool vis[10][10];

int dx[]={0, 1, 1, -1, -1, 2, 2, -2, -2};
int dy[]={0, 2, -2, 2, -2, 1, -1, 1, -1};

bool check(int x, int y)
{
    if(vis[x][y] == 1)
        return 0;
    for(int i = 1; i <= 8; i++)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if(nx==cx&&ny==cy)
            return 0;
    }
    return 1;
}

int main()
{
    cin >> c >> cy >> m >> my;
    cx = c - 'a' + 1;
    mx = m - 'a' + 1;
    
    for(int i = 0; i <= 8; i++)
    {
        vis[cx][i]=1;
        vis[i][cy]=1;
    }
    
    for(int i = 0; i <= 8; i++)
    {
        int nx = mx + dx[i], ny = my + dy[i];
        if(nx >= 1 && nx <= 8 &&ny >= 1 && ny <= 8)
        {
            vis[nx][ny]=1;
        }
    }
    
    int cnt = 0;
    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= 8; j++)
        {
            if(check(i, j) == 1)
            {
                cnt++;
            }
        }
    }
    
    cout << cnt;
    return 0;
}