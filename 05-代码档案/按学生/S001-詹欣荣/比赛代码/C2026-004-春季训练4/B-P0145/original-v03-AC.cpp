#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long b[100005];
long long c[100005];
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a[i];
    }
    for(int i=1;i<=t;i++){
        cin>>b[i];
    }
    c[1]=2;
    for(int i=2;i<=100000;i++){
        c[i]=(c[i-1]*2)%1000000007;
    }
    for(int i=1;i<=t;i++){
        cout<<c[b[i]]<<'\n';
    }
    return 0;
}