#include<bits/stdc++.h>
using namespace std;
long long a[50000];//2 18
int b[10000005];
int cnt[10005];
int main(){
    int n;
    cin>>n;
    a[0]=1;
    for(int i=1;i<=18;i++){
        a[i]=a[i-1]*2;
    }
    cnt[1]++;
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }           
    int ans=0;                                              
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int pos=lower_bound(a,a+20,b[i]+b[j])-a;
            if(b[i]+b[j]==a[pos]){
                //cout<<i<<" "<<j<<"/";
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
//lower_bound(a, a + n, x) - a;