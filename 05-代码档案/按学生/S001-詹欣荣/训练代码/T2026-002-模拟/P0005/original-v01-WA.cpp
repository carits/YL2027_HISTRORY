#include<bits/stdc++.h>
using namespace std;
int a[100005];
string s[100005];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>s[i];
    }
    int step=1;
    for(int i=1;i<=m;i++){
        int l,b;
        cin>>l>>b;
        if(a[step]==0){
            if(l==0){
                step-=b;
            }
            if(l==1){
                step+=b;
            }
        }
        if(a[step]==1){
            if(l==0){
                step+=b;
            }
            if(l==1){
                step-=b;
            }
        }
        if(step<1){
            step+=n;
        }
        if(step>n){
            step-=n;
        }
    }
    cout<<s[step];
    return 0;
}