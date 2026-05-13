#include<bits/stdc++.h>
using namespace std;
int main(){
    string n,m;
    cin>>n>>m;
    long long h1=1,h2=1;
    for(int i=0;i<n.size();i++){
        h1*=(n[i]-'A'+1); 
    }
    for(int i=0;i<m.size();i++){
        h2*=(m[i]-'A'+1); 
    }
   
    if(h2%47==h1%47){
        cout<<"GO";
    }else{
        cout<<"STAY";
    }
    return 0;
}