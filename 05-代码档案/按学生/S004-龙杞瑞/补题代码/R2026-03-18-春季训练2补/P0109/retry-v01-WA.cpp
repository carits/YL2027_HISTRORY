#include<bits/stdc++.h>

#define int long long

using namespace std;

set<int> st;
int t,n;

void init(){
    for(int k=2;k<=1000000;k++){
        int v=k+1,p=k*k;
        for(int m=3;m<=63;m++){
            v+=p;
            if(v>1000000) break;
            st.insert(v);
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
        if (st.count(n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}