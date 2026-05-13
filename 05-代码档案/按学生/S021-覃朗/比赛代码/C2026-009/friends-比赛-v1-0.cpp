#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    freopen("friends.in","r",stdin);
    freopen("friends.out","w",stdout);
    int n;
    cin>>n;
    int a[n+5],s=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
    }
    for(int i=1;i<=n;i++){
        if(s%i==0)cout<<s/i<<" ";
        else cout<<"1 ";
    }
    return 0;
}                    
