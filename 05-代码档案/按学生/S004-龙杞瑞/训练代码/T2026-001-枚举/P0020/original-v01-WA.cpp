#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e3+5;
int n,ans,a[N][N];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>a[i][j]; 
    for(int i=1;i<=n;i++){
        int sum=0;
         for(int j=1;j<=n;j++){
             sum+=a[i][j];
         }
         if(sum>=2) ans++;
    }
    cout<<ans;
    return 0;
}