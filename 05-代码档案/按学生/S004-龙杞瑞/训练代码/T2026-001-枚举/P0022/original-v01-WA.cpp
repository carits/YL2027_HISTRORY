#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,w,sum;
string s;
map<char,int>mp;
signed main(){
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        sum+=i*k;
    }
    cout<<sum-n;
    return 0;
}