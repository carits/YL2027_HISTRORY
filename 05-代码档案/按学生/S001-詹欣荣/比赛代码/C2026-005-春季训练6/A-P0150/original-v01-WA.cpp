#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxn=0;
        long long sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            maxn=max(maxn,a[i]);
            sum+=a[i];
        }
        if(sum%n!=0){
            cout<<"-1"<<'\n';
            continue;
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(maxn==a[i]){
                cnt++;
            }
        }
        if(cnt==n){
            cnt=0;
        }
        cout<<cnt<<'\n';
    }
    
    return 0;
}