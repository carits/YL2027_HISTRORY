#include<bits/stdc++.h>
int dx[9]={0,1,1,-1,-1,2,2,-2,-2};
int dy[9]={0,2,-2,2,-2,1,-1,1,-1};
int a[15][15];
using namespace std;
int main(){
    char q,w;
    int xc,yc,xm,ym;
    cin>>q>>yc>>w>>ym;
    xc=q-'a'+2;
    xm=w-'a'+2;
    ym++;
    yc++;
    for(int i=2;i<=9;i++){
        a[xc][i]=1;
        a[i][yc]=1;
        a[xm+dx[i]][ym+dy[i]]=1;
    }
    a[xc][yc]=2;
    a[xm][ym]=2;
    for(int i=2;i<=9;i++){
        for(int j=2;j<=9;j++){
            bool b=false;
            if(a[i][j]>=1){
                continue;
            }
            for(int k=1;k<=8;k++){
                if(a[i+dx[k]][j+dy[k]]==2){
                    b=true;
                    break;
                }
            }
            if(b){
                a[i][j]=1;
            }
        }
    }
    int cnt=0;
    for(int i=2;i<=9;i++){
        for(int j=2;j<=9;j++){
            if(a[i][j]==0){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}