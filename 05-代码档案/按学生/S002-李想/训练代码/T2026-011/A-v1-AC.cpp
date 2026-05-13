#include<bits/stdc++.h>
using namespace std;
#define int long long

int a,b,p;
int ksm(int x){
    if(x==1)return a;
    int t=ksm(x/2);t=(t*t)%p;
    if(x%2ll==0)return (1ll*t)%p;
    else return (1ll*a*t)%p;
}
signed main(){
    cin>> a >> b >> p;
    cout<< a << "^" << b << " mod " << p << "=" << (int)ksm(b)%p;
    return 0;
}