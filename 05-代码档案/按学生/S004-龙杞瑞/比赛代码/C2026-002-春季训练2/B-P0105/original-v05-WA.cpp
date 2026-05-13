#include<bits/stdc++.h>
#define int long long 
using namespace std;
int t;
char a[5][5];
void solve(){
    for(int i=1;i<=3;i++) for(int j=1;j<=3;j++) cin>>a[i][j];
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(a[i][j]!='.'&&(i==1||j==1)){
               int f=0,b=0;
                if(i==1){
                    for(int x=1;x<=3;x++) if(a[i][j]!=a[x][j]) f=1;
                    if(a[i][j]==a[i+1][j+1]&&a[i+1][j+1]==a[i+2][j+2]) b=2;
                    else b=1; 
                }else for(int x=1;x<=3;x++) if(a[i][j]!=a[i][x]) f=1;
                if(f==0||b==2){
                    cout<<a[i][j]<<'\n';
                    return ; 
                } 
            }
            if(i==1&&j==3){
                int b=0;
                if(a[i][j]==a[i+1][j-1]&&a[i+1][j-1]==a[i+2][j-2]) b=2;
                else b=1; 
                if(b==2){
                    cout<<a[i][j]<<'\n';
                    return ; 
                } 
            }
        }
    }
    cout<<"DRAW\n";
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--) solve();
    return 0;
}