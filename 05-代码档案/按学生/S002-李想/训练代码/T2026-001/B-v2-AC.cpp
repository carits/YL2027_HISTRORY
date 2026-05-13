#include<bits/stdc++.h>
using namespace std;

int n,a,b,c,ans=1e9;
int main(){
    cin>> n >> a >> b >> c;
    for(int i=0;i<=n/a;i++){
        for(int j=0;j<=n/b;j++){
            int k=n-i*a-j*b;
            if(k<0||k%c!=0)continue;
            k/=c;
            ans=min(ans,i+j+k);
            // cout<< i+j+k << " ";
        }
    }
    cout<< ans;
    return 0;
}