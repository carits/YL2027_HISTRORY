#include <bits/stdc++.h>
using namespace std;

struct Mat{ long long a[2][2]; };
long long mod;
Mat mul(Mat x, Mat y){
    Mat z{{{0,0},{0,0}}};
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) for(int k=0;k<2;k++)
        z.a[i][j]=(z.a[i][j]+__int128(x.a[i][k])*y.a[k][j])%mod;
    return z;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long A,X,M;
    cin >> A >> X >> M;
    mod=M;
    Mat res{{{1%mod,0},{0,1%mod}}};
    Mat base{{{A%mod,1%mod},{0,1%mod}}};
    while(X){
        if(X&1) res=mul(res,base);
        base=mul(base,base);
        X>>=1;
    }
    cout << res.a[0][1]%mod << '\n';
    return 0;
}
