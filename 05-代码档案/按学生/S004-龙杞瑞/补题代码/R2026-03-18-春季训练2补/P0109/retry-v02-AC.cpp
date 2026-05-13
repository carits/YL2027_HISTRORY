#include<bits/stdc++.h>
#define int long long
using namespace std;
set<int> st;
int t,n;
bool check(int n){
    int d=4*n-3,s=sqrt(d);
    return s*s==d&&s>3&&(s-1)%2==0;
}
void init(){
    for(int k=2;k<=1000000;k++){
        int v=1+k+k*k,p=k*k*k;
        for(int m=3;m<=60;m++){
            v+=p;
            if(v>1e18)break;
            st.insert(v);
            if(p>1e18/k)break;
            p*=k;
        }
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    init();
    cin>>t;
    while(t--){
        cin>>n;
        if(st.count(n)||check(n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}