#include <bits/stdc++.h>
using namespace std;

int N, M;
int a[16][16];
int ans=0;
void dfs(vector<int>& used, int cur){
    int i=0;
    while(i<M && used[i]) i++;
    if(i==M){ ans=max(ans,cur); return; }
    used[i]=1;
    for(int j=i+1;j<M;j++) if(!used[j]){
        used[j]=1;
        dfs(used, cur ^ a[i][j]);
        used[j]=0;
    }
    used[i]=0;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin>>N; M=2*N;
    for(int i=0;i<M-1;i++) for(int j=i+1;j<M;j++) cin>>a[i][j];
    vector<int> used(M,0);
    dfs(used,0);
    cout<<ans<<'\n';
    return 0;
}
