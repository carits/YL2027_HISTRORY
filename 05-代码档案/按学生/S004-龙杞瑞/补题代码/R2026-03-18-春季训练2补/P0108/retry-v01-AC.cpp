#include<bits/stdc++.h>
#define int long long 
using namespace std;
set<int>st;
int t,n;
signed main(){
    for(int i=2;i<=1000;i++){
        int val=i+1,p=i*i;
        for(int j=1;j<=20;j++){
            val+=p;
            if(val>1e6) break;
            st.insert(val);            
            p*=i;
        }
    }
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if (st.count(n)) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}