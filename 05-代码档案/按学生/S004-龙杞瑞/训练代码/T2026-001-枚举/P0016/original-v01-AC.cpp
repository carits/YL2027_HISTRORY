#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
signed main(){
    cin>>n;
    for(int i=100;i<=999;i++){
        int sum=i%10+i/10%10+i/100%10;
        if(sum==n) ans++;
    }
    cout<<ans;
    return 0;
}