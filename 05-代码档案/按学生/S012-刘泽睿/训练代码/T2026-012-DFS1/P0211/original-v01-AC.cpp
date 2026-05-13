#include<bits/stdc++.h>
using namespace std;
int a;
int u(int o){
    if(o==1)return 0;
    for(int i=2;i<=sqrt(o);i++){
        if(o%i==0)return 0;
    }return 1;
}void y(int k,int m){
    if(k>a){cout<<m<<endl;return;}
    m*=10;
    for(int i=1;i<=9;i++){
        if(u(m+i)){
            y(k+1,m+i);
        }
    }
}
int main(){
    cin>>a;
    y(1,0);
}