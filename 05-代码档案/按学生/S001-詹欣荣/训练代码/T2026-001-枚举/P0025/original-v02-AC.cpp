#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r,mom=0;
    cin>>k>>r;
    for(int i=1;i<=10;i++){
        mom+=k;
        if(mom%10==r||mom%10==0){
            cout<<i;
            return 0;
        }
    }
    cout<<10;
    return 0;
    
}