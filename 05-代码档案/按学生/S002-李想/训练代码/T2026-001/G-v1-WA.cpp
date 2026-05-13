#include<bits/stdc++.h>
using namespace std;

int k,n,w;
int main(){
    cin>> k >> n >> w;
    for(int i=1;i<=w;i++){
        n-=(i*k);
    } 
    cout<< 0-n;
    return 0;
}