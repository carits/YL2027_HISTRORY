#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin>>T;
    while(T--){
        string s; cin>>s;
        bool ok = s[0]=='1' && s.back()!='9';
        for(int i=1;i+1<(int)s.size();i++) if(s[i]=='0') ok=false;
        cout<<(ok?"YES":"NO")<<'\n';
    }
    return 0;
}
