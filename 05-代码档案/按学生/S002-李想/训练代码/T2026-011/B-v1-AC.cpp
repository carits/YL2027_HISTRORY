#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second

int a,b,p;
pair<int,int> ksm(int x){
    if(x==1)return {1%p,a};
    pair<int,int> t=ksm(x/2);
    if(x%2==0){
        t.fi=(t.fi*(1+t.se)%p)%p;
        t.se=(t.se*t.se)%p;
    }else{
        t.fi=(t.fi*((1+t.se*a)%p)+t.se)%p;
        t.se=a*((t.se*t.se)%p)%p;
    }
    return t;
}
signed main(){
    cin>> a >> b >> p;
    cout<< ksm(b).fi%p;
    return 0;
}