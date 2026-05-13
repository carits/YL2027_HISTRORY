#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,sum,ans; 
signed main(){
//    freopen("lttl.in", "r", stdin);
//    freopen("lttl.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>a>>b;
    if(a%2==1||b%2==1||a<0||b<0){
        cout<<"Impossible!";
        return 0;
    }
    sum=a/2*4-b;
    ans=sum/2;
    sum=(b-ans*6)/4;
    cout<<sum<<" "<<ans;
    return 0;
}
