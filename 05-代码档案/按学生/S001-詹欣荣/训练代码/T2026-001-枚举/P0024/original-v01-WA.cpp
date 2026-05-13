#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int t=240-k;
    for(int i=1;i<=n;i++){
        if(t>5*i){
            t-=5*i;
        }else{
            cout<<i-1;
            return 0;
        }
    }  
    return 0;
}