#include <bits/stdc++.h>
using namespace std;

long long make_num(string s){
    sort(s.rbegin(),s.rend());
    if(s.empty() || s[0]=='0') return -1;
    long long x=0;
    for(char c:s) x=x*10+c-'0';
    return x;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin>>s;
    int n=s.size(); long long ans=0;
    for(int mask=1; mask<(1<<n)-1; mask++){
        string a,b;
        for(int i=0;i<n;i++) (mask>>i&1 ? a : b).push_back(s[i]);
        long long x=make_num(a), y=make_num(b);
        if(x>0 && y>0) ans=max(ans,x*y);
    }
    cout<<ans<<'\n';
    return 0;
}
