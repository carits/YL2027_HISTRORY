#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[10005]; 
signed main(){
    cin>>t;
    while(t--){
        int cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(a[i]*a[j]==i+j) cnt++; 
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}