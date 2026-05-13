#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int main(){
    cin>> s1 >> s2;
    long long l1=1,l2=1;
    for(char c:s1){
        l1*=(c-'A'+1);
        l1%=47;
    }
    for(char c:s2){
        l2*=(c-'A'+1);
        l2%=47;
    }
    if(l1==l2)cout<< "GO";
    else cout<< "STAY";
    return 0;
}