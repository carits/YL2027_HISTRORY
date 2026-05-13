#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
priority_queue<int,vector<int>,greater<int>>q;
int main(){
    cin>> n >> m;
    for(int i=1,x;i<=n;i++){
        cin>> x;
        if(i<=m)q.push(x);
        else{
            x+=q.top();
            q.pop();
            q.push(x);
        }
    }
    while(!q.empty()){
        ans=max(ans,q.top());
        q.pop();
    }
    cout<< ans;
    return 0;
}