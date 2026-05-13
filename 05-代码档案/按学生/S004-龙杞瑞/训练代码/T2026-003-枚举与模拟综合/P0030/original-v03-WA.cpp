#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[1000005]; 
struct node{
    int x,val;
}pre[100005];
signed main(){
    cin>>t;
    while(t--){
        int cnt=0;
        memset(pre,0,sizeof(pre));
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++){
            int j1=0;
            if((2*i+1)%a[i]==0) j1=i+1;
            else j1=i+1+a[i]-(2*i+1)%a[i];
            int j2=j1+a[i];
            for(int j=j=(i+1+(a[i]-(2*i+1)%a[i]))%a[i];j<=n;j+=a[i]){
                if(a[i]*a[j]==i+j) cnt++;
            } 
        }
        cout<<cnt/2<<endl<<endl;
    }
    return 0;
}