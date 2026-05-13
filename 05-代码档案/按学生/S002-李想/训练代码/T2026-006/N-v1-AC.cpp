#include<bits/stdc++.h>
using namespace std;

int t,n,m;
void slove(){
    vector<int>ans;
    cin>> n >> m;
    for(int i=0;(1ll<<i)<=n;i++){
        if((((n>>i)&1))!=(((m>>i))&1)){
            ans.push_back(1ll<<i);
            n^=1ll<<i;
        }
    }
    if(n!=m){
        cout<< -1 << "\n";
        return;
    }
    cout<< ans.size() << "\n";
    for(int v:ans)cout<< v << " ";
    if(ans.size())cout<< "\n";
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}