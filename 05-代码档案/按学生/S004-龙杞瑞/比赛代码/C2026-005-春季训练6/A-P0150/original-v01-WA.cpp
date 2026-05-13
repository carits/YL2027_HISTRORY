#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int t,a[N];
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        int n,sum=0,f=0,cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
            if(i==1) continue;
            if(a[i]!=a[i-1]) f=1;
        }
        if(n==1){
            cout<<0<<'\n';
            continue;
        }
        if(f==0){
            cout<<0<<'\n';
            continue;
        }
        if(sum%n!=0){
            cout<<-1<<'\n';
            continue;
        }
        sum/=n;
        sort(a+1,a+n+1);
        for(int i=1,j=n;i<=j;){
            if(sum==a[i]||sum==a[j]) break; 
            if(sum-a[i]<=a[j]-sum) a[j]-=sum-a[i],i++;
            else a[i]+=a[j]-sum,j--;
            cnt++;
        } 
        cout<<cnt<<'\n';
    }
    return 0;
}