#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[100005],x,ans;
signed main(){
    for(int i=1;i<=10;i++) cin>>a[i];
    cin>>x;
    for(int i=1;i<=10;i++){
       if(a[i]<=x+30) ans++; 
    } 
    cout<<ans; 
    return 0;
}
