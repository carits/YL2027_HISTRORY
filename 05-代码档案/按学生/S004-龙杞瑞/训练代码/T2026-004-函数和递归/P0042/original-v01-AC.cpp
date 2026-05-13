#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n;
signed main(){
    cin>>t;
    while(t--){
        cin>>n;
        int k=3;
        if(n==0){
            cout<<3;
            return 0;
        }
        for(int i=1;i<=n;i++){
            k=(k-1)*2;
        }
        cout<<k<<endl; 
    }
    return 0;
}