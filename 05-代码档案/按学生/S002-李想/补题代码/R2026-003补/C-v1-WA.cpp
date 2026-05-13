#include<bits/stdc++.h>
using namespace std;
#define ll long long

int t,n;
void slove(){
    cin>> n;
    ll mx=0,mn=0;
    for(int i=1;i<=n;i++){
        ll x;
        cin>> x;
        ll maxn=mx+x,minn=mn+x;
        mx=max(max(maxn,abs(maxn)),min(minn,abs(minn)));
        mn=min(max(maxn,abs(maxn)),min(minn,abs(minn)));
    }
    cout<< max(mx,abs(mn)) << "\n";
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}