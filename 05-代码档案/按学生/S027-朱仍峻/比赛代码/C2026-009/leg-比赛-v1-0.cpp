#include <bits/stdc++.h>
using namespace std;
int n,m,a,b,c,d,ans=INT_MAX;
int dx[2]={1,0};
int dy[2]={0,1};
struct node{
    int x,y,tl;
};
void bfs(){
    queue<node>q;
    q.push({0,0,0});
    while(!q.empty()){
        node now=q.front();
        q.pop();
        if(now.x==n&&now.y==m){
            ans=min(ans,now.tl);
        }
        for(int i=0;i<2;i++){
            int xx=now.x+dx[i];
            int yy=now.y+dy[i];
            int ztl;
            if((now.x+now.y)%2==0){
                if(i==0) ztl=a;
                else ztl=b;
            }else{
                if(i==0) ztl=c;
                else ztl=d;
            }
            if(xx>=0&&xx<=n&&yy>=0&&yy<=m){
                q.push({xx,yy,now.tl+ztl});
            }
        }
    }
    return;
}
int main(){
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    cin>>n>>m>>a>>b>>c>>d;
    bfs();
    cout<<ans;
    return 0;
}
