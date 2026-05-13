#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int f(int d){
    if(d==0)return 0;
    if(d%2==0)return f(d/2)*f(d/2)%c;
    else{
        return f(d/2)*f(d/2)*a%c;
    }
}
int main(){
    cin>>a>>b>>c;
    cout<<f(b);
}