#include<bits/stdc++.h>
using namespace std;
int a,b,c;
long long f(long long d){
    if(d==0)return 1;
    if(d%2==0)return f(d/2)*f(d/2)%c;
    else{
        return f(d/2)*f(d/2)*a%c;
    }
}
int main(){
    cin>>a>>b>>c;
    cout<<a<<"^"<<b<<" mod "<<c<<"="<<f(b);
}