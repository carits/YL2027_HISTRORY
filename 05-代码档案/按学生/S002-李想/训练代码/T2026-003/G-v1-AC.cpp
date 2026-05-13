#include<bits/stdc++.h>
using namespace std;

int t;
string s;
int main(){
    cin>> t;
    while(t--){
        cin>> s;
        int ans=1e9;
        for(char c='a';c<='z';c++){
            int mx=0,ln=0;
            for(char ch:s){
                if(ch!=c)ln++;
                else mx=max(mx,ln),ln=0;
            }
            mx=max(mx,ln);
            if(mx==0){
                ans=0;
                break;
            }
            ans=min(ans,(int)log2(mx)+1);
        }
        cout<< ans << "\n";
    }
    return 0;
}