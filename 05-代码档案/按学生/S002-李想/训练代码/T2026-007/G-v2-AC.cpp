#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,x,ans;
signed main(){
    cin>> n;
    map<int,int>mp[2];
    mp[0][0]=1;
    for(int i=1,nm;i<=n;i++){
        cin>> nm;
        x^=nm;
        ans+=mp[i%2][x]++;
    }
    cout<< ans;
    return 0;
}