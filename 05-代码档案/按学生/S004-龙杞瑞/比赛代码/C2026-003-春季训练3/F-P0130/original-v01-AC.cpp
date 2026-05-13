#include<bits/stdc++.h>
#define int long long
using namespace std;
int t;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        int f=0;
        int x,y;
        cin>>x>>y;
        for(int i=x+1;i<y;i++){
            if(__gcd(i,y)==1&&__gcd(i,x)==1){
                cout<<i<<'\n';
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<-1<<'\n'; 
        }
    }
    return 0;
}