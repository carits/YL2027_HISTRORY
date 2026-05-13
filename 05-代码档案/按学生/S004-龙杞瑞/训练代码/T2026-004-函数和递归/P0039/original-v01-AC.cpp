#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
string s,t,k;
signed main(){
    cin>>n>>s>>t;
    for(int i=0;i<n;i++){
        if(s[i]<t[i]){
            cout<<-1;
            return 0;
        }
    }
    cout<<t;
    return 0;
}