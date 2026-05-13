#include<bits/stdc++.h>
#define int long long
using namespace std;
string s1,s2,s11,s12,s21,s22; 
signed main(){
//    freopen("smym.in", "r", stdin);
//    freopen("smym.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>s1>>s2; 
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='a'||s1[i]=='o'||s1[i]=='e'||s1[i]=='i'||s1[i]=='u'||s1[i]=='v'){
            s11=s1.substr(0,i);
            s12=s1.substr(i,s1.size()-i);
            break;
        }
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='a'||s2[i]=='o'||s2[i]=='e'||s2[i]=='i'||s2[i]=='u'||s2[i]=='v'){
            s21=s2.substr(0,i);
            s22=s2.substr(i,s2.size()-i);
            break;
        }
    }
    if(s11==s21&&s12==s22) cout<<3;
    else if(s11!=s21&&s12!=s22) cout<<0;
    else if(s11==s21&&s12!=s22) cout<<2;
    else if(s11!=s21&&s12==s22) cout<<1;
    return 0;
}