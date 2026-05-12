#include <bits/stdc++.h>
using namespace std;

int N,T,M;
bool bad[11][11];
vector<vector<int>> team;
long long ans=0;
void dfs(int x,int used){
    if(x>N){ if(used==T) ans++; return; }
    if(used>T) return;
    if(used + (N-x+1) < T) return;
    for(int i=0;i<used;i++){
        bool ok=true;
        for(int y:team[i]) if(bad[x][y]) ok=false;
        if(ok){ team[i].push_back(x); dfs(x+1,used); team[i].pop_back(); }
    }
    if(used<T){
        team[used].push_back(x);
        dfs(x+1,used+1);
        team[used].pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin>>N>>T>>M;
    for(int i=0,a,b;i<M;i++){ cin>>a>>b; bad[a][b]=bad[b][a]=true; }
    team.assign(T,{});
    dfs(1,0);
    cout<<ans<<'\n';
    return 0;
}
