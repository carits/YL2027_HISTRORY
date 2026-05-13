#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,p;
int h,m,hh,mm;
string s;
char a[15]={'0','1','5','E','E','2','9','E','8','6'};
bool check(string s){
    hh=0,mm=0;
    sscanf(s.c_str(),"%lld:%lld",&hh,&mm);
    // cout<< hh << " " << mm << "\n";
    return hh<h&&mm<m&&!p;
}
bool slove(string s){
    p=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]==':')continue;
        s[i]=a[s[i]-'0'];
        if(s[i]=='E')p=1;
    }
    return check(s);
} 
void Slove(){
    cin>> h >> m >> s;
    while(!slove(s)){
        int hhh,mmm;
        sscanf(s.c_str(),"%lld:%lld",&hhh,&mmm);
        mmm++;
        if(mmm==m)hhh++,mmm=0;
        if(hhh==h)hhh=0;
        s=to_string(hhh)+':';
        if(hhh<10)s='0'+s;
        if(mmm<10)s+='0';
        s+=to_string(mmm);
    }
    cout<< s << "\n";
}
signed main(){
    int oT_To;
    cin>> oT_To;
    while(oT_To--)Slove();
    return 0;
}