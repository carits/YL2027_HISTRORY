#include <iostream>
#include <vector>
using namespace std;

const int N = 20;
bool map[N][N],vis[N][N];
bool ans = false;
vector<pair<int,int> > way;

int dx[] = {0,-1,0,1};
int dy[] = {-1,0,1,0};

void dfs(int x,int y,int ex,int ey,int n,int m){
    if(x == ex && y == ey){
        for(int i = 0;i < way.size();i++){
            cout << "(" << way[i].first << "," << way[i].second << ")";
            if(i != way.size() - 1) cout << "->";
        }
        cout << "\n";
        ans = true;
        return;
    }

    if(x < 1 || x > n || y < 1 || y > m){
        return;
    }
    if(map[x][y] == 0){
        return;
    }
    
    for(int i = 0;i < 4;i++){
        int xx = x + dx[i];
        int yy = y + dy[i];

        if(!vis[xx][yy]){
            vis[xx][yy] = true;
            way.push_back({xx,yy});
            dfs(xx,yy,ex,ey,n,m);
            way.pop_back();
            vis[xx][yy] = false;            
        }        
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> map[i][j];
        }
    }

    int sx,sy,ex,ey;
    cin >> sx >> sy >> ex >> ey;

    way.push_back({sx,sy});
    dfs(sx,sy,ex,ey,n,m);
    if(ans == false) cout << "-1";
    
    return 0;
    
}