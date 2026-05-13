#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n;
int const N=2e5+5;
int a[N],b[N];
void slove(){
    int ans=0,id=0;
    priority_queue<int,vector<int>,greater<int>>q;
    cin>> n;
    for(int i=1;i<=n;i++)cin>> a[i];
    for(int i=1;i<=n;i++)cin>> b[i];
    for(int i=n;i>=1;i--){
        q.push(a[b[i]]);
        while((long long)q.size()>(long long)i)q.pop();
        if(q.size()>=i&&q.top()*i>=ans){
            ans=q.top()*i;
            id=i;
        }
    }
    cout<< ans << " " << id << "\n";
}
signed main(){
    cin>> t;
    while(t--)slove();
    return 0;
}