#include<bits/stdc++.h>
using namespace std;
int a[105];
string s;
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++; 
    }
    int cnt=0;
    for(int i=0;i<=25;i++){
        if(a[i]!=0){
            cnt++;
        }
    }
    if(cnt%2==1){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}