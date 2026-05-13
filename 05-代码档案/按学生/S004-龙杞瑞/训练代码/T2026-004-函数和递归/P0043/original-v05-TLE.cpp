#include<bits/stdc++.h>
#define int long long
using namespace std;
int q,a,b;
string s,t;
signed main(){
    cin>>a>>b>>q>>s>>t;
    while(q--){
        int cnt=0;
        int xi,yi;
        cin>>xi>>yi;
        xi--,yi--;
        for(int i=xi;i<=yi;i++){
            if(s[i]==t[0]){
                if(i+b-1>yi) break;
                string st=s.substr(i,b);
                if(st==t) cnt++;
            }
        }
        if(yi-xi+1<b){
            cout<<0<<endl;
            continue;
        }
        cout<<cnt<<endl;
    }
    return 0;
}