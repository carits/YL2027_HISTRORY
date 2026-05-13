#include<bits/stdc++.h>
using namespace std;

string s;
int n,ans;
map<char,bool>mp;
int main(){
    cin>> s;
    ans=s.size();
    for(char c:s){
        ans-=mp[c];
        mp[c]=1;
    }
    if(ans%2)cout<< "IGNORE HIM!";
    else cout<< "CHAT WITH HER!";
    return 0;
}