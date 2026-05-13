#include<bits/stdc++.h>
using namespace std;

int t,xp,ct1,ct2;
string st,en;
void dfs(int x,int y,int p){
    if(y==en.size()-1)xp=1;
    if(p==1){
        if(x+1>st.size()||en[y+1]!=st[x+1]){
            p=0;
        }
    }
    if(p&&x+1<st.size()&&en[y+1]==st[x+1]){
        dfs(x+1,y+1,p);
    }
    p=0;
    if(!p&&x-1>=0&&en[y+1]==st[x-1]){
//        cout<< x;
        dfs(x-1,y+1,p);
    }
}
void slove(){
    xp=0;
    cin>> st >> en;
    for(int i=0;i<st.size();i++){
        if(st[i]==en[0])dfs(i,0,1);
    }
    if(xp==1)cout<< "Yes";
    else cout<< "No";
    cout<< "\n";
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}