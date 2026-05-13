#include<bits/stdc++.h>
#define int long long 
using namespace std;
int t;
char a[5][5];
void solve(){
    for(int i=1;i<=3;i++) for(int j=1;j<=3;j++) cin>>a[i][j];
    for(int i=1;i<=3;i++){
        if(a[i][1]!='.' && a[i][1]==a[i][2] && a[i][2]==a[i][3]){
            cout<<a[i][1]<<'\n';
            return;
        }
    }
    for(int j=1;j<=3;j++){
        if(a[1][j]!='.' && a[1][j]==a[2][j] && a[2][j]==a[3][j]){
            cout<<a[1][j]<<'\n';
            return;
        }
    }
    if(a[1][1]!='.' && a[1][1]==a[2][2] && a[2][2]==a[3][3]){
        cout<<a[1][1]<<'\n';
        return;
    }
    if(a[1][3]!='.' && a[1][3]==a[2][2] && a[2][2]==a[3][1]){
        cout<<a[1][3]<<'\n';
        return;
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