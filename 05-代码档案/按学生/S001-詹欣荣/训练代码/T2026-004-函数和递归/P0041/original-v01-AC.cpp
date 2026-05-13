#include<bits/stdc++.h>
using namespace std;
int n;
char a,b,c;
void dfs(int m,char a,char b,char c){
    if(m==0)return ;
    dfs(m-1,a,c,b);
    cout<<m<<":"<<a<<"->"<<c<<endl;
    dfs(m-1,b,a,c);
}
int main(){
    cin>>n;
    cin>>a>>b>>c;
    dfs(n,a,b,c);
    return 0;
}