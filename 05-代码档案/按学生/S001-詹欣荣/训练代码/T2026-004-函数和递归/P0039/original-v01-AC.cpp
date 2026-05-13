#include<bits/stdc++.h>
using namespace std;
string s2,g;
string s1;
int main(){
    int n;
    cin>>n;
    cin>>s2>>g;
    for(int i=0;i<n;i++){
        if(s2[i]<g[i]){
            cout<<"-1";
            return 0;
        }
    }
    cout<<g;
    return 0;
}