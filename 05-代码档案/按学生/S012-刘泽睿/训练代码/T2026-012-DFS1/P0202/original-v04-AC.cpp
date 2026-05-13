#include<bits/stdc++.h>
using namespace std;
int a,b,c[20][20],d[1000][2],e,l,j,h,s;
void f(int o,int x,int y){
    if(!c[x][y])return;
    if(x==j and y==h){
        for(int i=0;i<o;i++){
            cout<<"("<<d[i][0]<<","<<d[i][1]<<")"<<"->";
        }cout<<"("<<j<<","<<h<<")\n";
        s++;
        return;
    }
    c[x][y]=0;
    d[o][0]=x;
    d[o][1]=y;
    f(o+1,x,y-1);
    f(o+1,x-1,y);
    f(o+1,x,y+1);
    f(o+1,x+1,y);
    c[x][y]=1;
    return;
}
int main(){
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cin>>c[i][j];
        }
    }cin>>e>>l>>j>>h;
    f(0,e,l);
    if(!s)cout<<-1;
    return 0;
}