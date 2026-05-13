#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s[s.size()-1]=='9'||s[0]!='1')
        {
            cout<<"NO\n";
            continue;
        }
        int x=0;
        for(int i=1;i<s.size()-1;i++){
            if(s[i]=='0'){
                x=1;
                break;
            }
        } 
        if(x==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}