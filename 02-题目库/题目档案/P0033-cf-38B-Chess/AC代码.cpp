#include <bits/stdc++.h>
using namespace std;

bool knight(int x1,int y1,int x2,int y2){
    int dx=abs(x1-x2), dy=abs(y1-y2);
    return dx*dy==2;
}
pair<int,int> pos(string s){ return {s[0]-'a', s[1]-'1'}; }
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string rs,ks; cin>>rs>>ks;
    auto [rx,ry]=pos(rs); auto [kx,ky]=pos(ks);
    int ans=0;
    for(int x=0;x<8;x++) for(int y=0;y<8;y++){
        if((x==rx&&y==ry)||(x==kx&&y==ky)) continue;
        if(x==rx || y==ry) continue;
        if(knight(x,y,kx,ky)) continue;
        if(knight(x,y,rx,ry)) continue;
        ans++;
    }
    cout<<ans<<'\n';
    return 0;
}
