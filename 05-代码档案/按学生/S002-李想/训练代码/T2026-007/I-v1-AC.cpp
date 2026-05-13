#include<bits/stdc++.h>
using namespace std;

int t,n,k;
string s;
int const N=2e5+5;
int dp[N][3];
void slove(){
    int ans=1e9;
    dp[0][0]=dp[1][0]=dp[2][0]=0;
    cin>> n >> k >> s;
    string an="RGB";
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            dp[i+1][j]=dp[i][j];
            if(s[i]!=an[(i+j)%3])dp[i+1][j]++;
        }
    }
    for(int i=0;i+k<=n;i++){
        for(int j=0;j<3;j++){
            ans=min(ans,dp[i+k][j]-dp[i][j]);
        }
    }
    cout<< ans << "\n";
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}