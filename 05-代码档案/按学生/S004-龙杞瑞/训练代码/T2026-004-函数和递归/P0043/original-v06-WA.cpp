#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e3+5;
int q,a,b,cnt;
string s,t;
struct node{
    int l,r;
}ai[N];
signed main(){
    cin>>a>>b>>q>>s>>t;
    for(int i=0;i<a-b;i++){
        if(s[i]==t[0]){ 
            string st=s.substr(i,b);
            if(st==t) ai[++cnt].l=i,ai[cnt].r=i+b-1;
        }
    }
   
    while(q--){
        int sum=0;
        int xi,yi;
        cin>>xi>>yi;
        xi--,yi--;
        for(int i=1;i<=cnt;i++){
            if(ai[i].l>=xi&&ai[i].r<=yi) sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}