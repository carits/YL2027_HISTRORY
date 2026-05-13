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
            for(int sum=a[i];sum<=i+n;sum+=a[i]){
                int j=sum-i;
                if(i<j&&a[i]*a[j]==i+j) cnt++;
            }
        }
        cout<<cnt<<endl<<endl;
    }
    return 0;
}