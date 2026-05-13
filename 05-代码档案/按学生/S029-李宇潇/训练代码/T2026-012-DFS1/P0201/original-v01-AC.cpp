#include <iostream>
using namespace std;

const int N = 25;
int love[N][2];
bool vis[N];
int ans = 0;

void dfs(int dep,int n){
    if(dep > n){
        ans++;
        return;
    }

    for(int i = 0;i <= 1;i++){
        if(vis[love[dep][i]] == false){
            vis[love[dep][i]] = true;
            dfs(dep + 1,n);
            vis[love[dep][i]] = false;
        }
    }
}

int main(){
    int n;
    cin >> n;

    for(int i = 1;i <= n;i++){
        cin >> love[i][0] >> love[i][1];
    }

    dfs(1,n);

    cout << ans;

    return 0;
}