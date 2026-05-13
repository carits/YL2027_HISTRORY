#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(int a,int b){
    ll r;
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll n,m;
        cin>>n>>m;
        bool b=true;
        for(int j=n+1;j<m;j++){
            
            if(gcd(j,n)==1&&gcd(j,m)==1){
                cout<<j<<'\n';
                b=false;
                break;
            }
        }
        if(b){
            cout<<"-1"<<'\n';
        }
    }
    return 0;
}