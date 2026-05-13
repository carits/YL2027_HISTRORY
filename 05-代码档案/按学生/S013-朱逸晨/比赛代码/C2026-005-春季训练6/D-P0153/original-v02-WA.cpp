#include<bits/stdc++.h>
using namespace std;
int n;
string s,t;
bool f(string a,string b,int r,int ax,int bx){
    if(ax>=a.size()||ax<0){
        return 0;
    }
    if(bx>=b.size()){
        return 1;
    }
    if(a[ax]!=b[bx]){
        return 0;
    }
    if(f(a,b,r,ax+r,bx+1)){
        return 1;
    }
    if(r==1){
        if(f(a,b,-1,ax-1,bx+1)){
            return 1;
        }
    }
    return 0;
}
int main(){
    cin>>n;
    while(n--){
        cin>>s>>t;
        bool b=1;
        for(int i=0;i<s.size();i++){
            if(f(s,t,1,i,1)){
                cout<<"YES"<<endl;
                b=0;
                break;
            }
        }
        if(b){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}