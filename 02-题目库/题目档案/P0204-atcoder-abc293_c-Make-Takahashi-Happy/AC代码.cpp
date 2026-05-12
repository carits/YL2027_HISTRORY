#include <bits/stdc++.h>
using namespace std;

int H,W;
long long ans=0;
vector<vector<long long>> a;
set<long long> st;
void dfs(int x,int y){
    if(st.count(a[x][y])) return;
    st.insert(a[x][y]);
    if(x==H-1 && y==W-1) ans++;
    else{
        if(x+1<H) dfs(x+1,y);
        if(y+1<W) dfs(x,y+1);
    }
    st.erase(a[x][y]);
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin>>H>>W;
    a.assign(H, vector<long long>(W));
    for(auto &row:a) for(auto &x:row) cin>>x;
    dfs(0,0);
    cout<<ans<<'\n';
    return 0;
}
