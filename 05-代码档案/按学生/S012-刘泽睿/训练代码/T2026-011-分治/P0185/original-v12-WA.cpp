#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
long long f(long long d){
    if(d==0)return 1;
    long long s=f(d/2);
    if(d%2==0)return s*s%c;
    else{
        return s*s*a%c;
    }
}
int main(){
    cin>>a>>b>>c;
    cout<<a<<"^"<<b<<" mod "<<c<<"="<<f(b);
}