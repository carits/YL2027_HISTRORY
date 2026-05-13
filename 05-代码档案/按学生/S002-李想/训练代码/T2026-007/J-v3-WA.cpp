#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,q;
int const N=1005;
void slove(){
    int sum[N][N]={};
    cin>> n >> q;
    for(int i=1,h,w;i<=n;i++){
        cin>> h >> w;
        sum[h][w]+=(h*w);
    }
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            sum[i][j]+=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
        }
    }
    while(q--){
        int sx,sy,ex,ey;
        cin>> sx >> sy >> ex >> ey;
        sx++,sy++,ex--,ey--;
        cout<< sum[ex][ey]-sum[sx-1][sy]-sum[sx][sy-1]+sum[sx-1][sy-1] << "\n";
    }
}
signed main(){
    cin>> t;
    while(t--)slove();
    return 0;
}