#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long a,b;
    cin>>a>>b;
    if(a%2!=0||b%2!=0){
        cout<<"Impossible!";
        return 0;
    }
    if(a*2<b){
        cout<<"Impossible!";
        return 0;
    }
    long long c=a/2*4;
    long long d=a*2-b;
    d=d/2;
    long long e=(a-d*4)/2;
    if(e*4+d*6!=b){
        cout<<"Impossible!";
        return 0;
    }
    cout<<e<<" "<<d;
    return 0;
}