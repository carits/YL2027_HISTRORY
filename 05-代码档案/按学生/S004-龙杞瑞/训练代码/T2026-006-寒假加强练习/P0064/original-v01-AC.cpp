#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        int sum=0;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            sum+=a;
        }
        if(s<sum) cout<<"NO\n";
        else if(s==sum) cout<<"YES\n";
        else{
            if((s-sum)%x==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}