#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int f(int d){
    if(d==0)return 0;
    return pow(f(d/2),2)%c;
}
int main(){
    cin>>a>>b>>c;
    cout<<f(b);
}