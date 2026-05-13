#include<bits/stdc++.h>
using namespace std;
int n,a[100010],s[100010],ans=0;
int main(){
    freopen("friends.in","r",stdin);
    freopen("friends.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    s[1]=a[1];
    for(int i=1;i<=n;i++) s[i]=s[i-1]+a[i];
    for(int i=1;i<=n;i++){
        if(i==1) cout<<s[n]<<' ';
        else cout<<s[n]/i<<' ';
    }
    
    return 0;
}
