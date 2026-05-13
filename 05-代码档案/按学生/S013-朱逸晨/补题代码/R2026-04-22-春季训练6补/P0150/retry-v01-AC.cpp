#include<bits/stdc++.h>
using namespace std;
int n,t,a[200005];
int main (){
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0,cnt=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n){
            cout<<"-1"<<endl;
            continue;
        }
        for(int i=1;i<=n;i++){
            if(a[i]>sum/n){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}