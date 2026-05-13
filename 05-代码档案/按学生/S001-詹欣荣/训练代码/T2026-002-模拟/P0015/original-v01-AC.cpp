#include<bits/stdc++.h>
using namespace std;
queue<int>q;
int main(){
    int n,s,m;
    cin>>n>>s>>m;
    for(int i=0;i<n;i++){
        if(s+i>n){
            q.push(s+i-n);
        }else{
            q.push(i+s);
        }
    }
    int cnt=0;
    while(q.size()!=0){
        cnt++;
        if(cnt==m){
            cnt=0;
            cout<<q.front()<<" ";
            q.pop();
        }else{
            q.push(q.front());
            q.pop();
        }
    }
    return 0;
}