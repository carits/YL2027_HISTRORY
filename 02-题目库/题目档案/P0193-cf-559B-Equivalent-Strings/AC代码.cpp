#include <bits/stdc++.h>
using namespace std;

string canon(string s){
    int n=s.size();
    if(n%2) return s;
    string a=canon(s.substr(0,n/2));
    string b=canon(s.substr(n/2));
    if(a>b) swap(a,b);
    return a+b;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;
    cin >> a >> b;
    cout << (canon(a)==canon(b)?"YES":"NO") << '\n';
    return 0;
}
