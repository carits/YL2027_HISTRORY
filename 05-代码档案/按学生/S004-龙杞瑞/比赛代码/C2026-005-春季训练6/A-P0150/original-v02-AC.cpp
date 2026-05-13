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
        int n,sum=0,cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0){
            cout<<-1<<'\n';
            continue;
        }
        sum/=n;
        for(int i=1;i<=n;i++){
            if(a[i]>sum) cnt++;
        } 
        cout<<cnt<<'\n';
    }
    return 0;
}