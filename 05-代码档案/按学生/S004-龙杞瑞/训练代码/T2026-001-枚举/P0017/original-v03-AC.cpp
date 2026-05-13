#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a,b,c,sum=1e9;
signed main(){
    cin>>n>>a>>b>>c;
    int mini=min(a,min(b,c));
    int x=ceil(1.0*n/1.0*mini);
    for(int i=0;i<=x;i++){
        if(i*a>n) break;
        for(int j=0;j<=x;j++){
            if(i*a+j*b>n) break;
            int k=n-i*a-j*b;
            if(k%c!=0) continue;
            if(i*a+j*b+k==n) sum=min(sum,i+j+k/c);
            else if(i*a+j*b+k*c>n) break;
        }
    }
    cout<<sum;
    return 0;
}