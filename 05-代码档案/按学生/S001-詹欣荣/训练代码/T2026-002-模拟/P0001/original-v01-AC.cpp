#include<bits/stdc++.h>
using namespace std;
long long a[100005];
int b[100005];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        int q=0,f=INT_MAX;
        for(int j=1;j<=m;j++){
            if(b[j]<f){
                q=j;
                f=b[j];
            }
        }
        b[q]+=a[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,b[i]);
    }
    cout<<ans;
    return 0;
    
}