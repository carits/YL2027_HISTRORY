#include<bits/stdc++.h>
using namespace std;
int t,n,a[200010],s[200010],s2[200010],v[200010],b[200010],ans=0;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        if(n==1) cout<<a[1]<<endl;
        else if(n==2){
            cout<<a[2]<<' '<<a[1]<<endl;
        }else{
            for(int i=2;i<=n;i++) cout<<a[i]<<' ';
            cout<<a[1]<<endl;
        }
    }
     return 0;
}