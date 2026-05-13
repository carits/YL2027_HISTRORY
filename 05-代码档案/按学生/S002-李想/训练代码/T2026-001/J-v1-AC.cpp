#include<bits/stdc++.h>
using namespace std;
#define int long long

int k,r;
signed main(){
    cin>> k >> r;
    for(int i=1;i<=1e7;i++){
        int x=(i*k)%10;
        if(x==0||x==r){
            cout<< i;
            break; 
        }
    }
    return 0;
}