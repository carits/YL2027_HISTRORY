#include<bits/stdc++.h>
using namespace std;
int ans=0;
int a[4][10005];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=3;j++){
          cin>>a[j][i];
          if(a[j][i]==1){
              cnt++;
          }
        }
        if(cnt>=2){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}