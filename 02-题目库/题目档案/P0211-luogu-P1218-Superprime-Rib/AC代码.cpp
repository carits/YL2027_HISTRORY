#include <bits/stdc++.h>
using namespace std;

bool prime(int x){
    if(x<2) return false;
    for(int i=2;1LL*i*i<=x;i++) if(x%i==0) return false;
    return true;
}
int n;
void dfs(int x,int len){
    if(len==n){ cout<<x<<'\n'; return; }
    for(int d:{1,3,7,9}){
        int y=x*10+d;
        if(prime(y)) dfs(y,len+1);
    }
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin>>n;
    for(int x:{2,3,5,7}) dfs(x,1);
    return 0;
}
