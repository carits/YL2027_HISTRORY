#include<bits/stdc++.h>
using namespace std;
#define int long long
 string a,b;
string dfs(string s){
    int ln=s.size();
 if(ln%2==1)return s;
    string s1=dfs(s.substr(0,ln/2)),s2=dfs(s.substr(ln/2,ln/2));
    return (s1<s2?s1+s2:s2+s1);
}
signed main(){
    cin>> a >> b;
 if(a.size()!=b.size())cout<< "NO";
 else if(dfs(a)==dfs(b))cout<< "YES";
 else cout<< "NO";
}