#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[100005],x,ans;
signed main(){
    for(int i=1;i<=10;i++) cin>>a[i];
    cin>>x;
    sort(a+1,a+10+1);
    for(int i=1;i<=10;i++){
       if(a[i]<=x) ans++; 
    } 
    cout<<ans; 
    return 0;
}
