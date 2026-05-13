#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e3+5;
int n,ans;
string s;
map<char,int>mp;
signed main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        if(mp[s[i]]==1) ans++;
    }
    if(ans%2==1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}