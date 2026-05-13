#include<bits/stdc++.h>
using namespace std;
int n,m,a[20][20]={{0},{0,20,20,20,20,20},{0,20,20,10,30,20},{0,25,25,30,20},{0,15,15,15,10,10,15,20}},ans=0;
int main(){
    freopen("skill.in","r",stdin);
    freopen("skill.out","w",stdout);
    cin>>n>>m;
    cout<<a[n][m];
    
    return 0;
}
