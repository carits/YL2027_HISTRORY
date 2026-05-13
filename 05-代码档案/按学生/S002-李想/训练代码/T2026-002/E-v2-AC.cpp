#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[2][2]={{-1,1},{1,-1}};
int const N=1e5+5;
int x[N];
string s[N];
map<string,int>mp;
int main(){
    cin>> n >> m;
    for(int i=1;i<=n;i++){
        cin>> x[i] >> s[i];
        mp[s[i]]=i;
    }
    string p=s[1];
    while(m--){
        int xpp,r;
        cin>> xpp >> r;
        int xp=a[x[mp[p]]][xpp]*(r);
        int op=mp[p]+xp;
        // cout<< op << " ";
        if(op<=0)op=n+op;
        if(op>n)op=op-n;
        p=s[op];
        // cout<< op << "\n";
    }
    cout<< p;
    return 0;
}