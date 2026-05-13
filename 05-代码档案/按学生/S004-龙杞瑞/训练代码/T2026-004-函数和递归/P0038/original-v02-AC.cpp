#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,cnt;
int check(int x){
    if(x<2) return 0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
signed main(){
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        int sum=0,t=i;
        while(t){
            sum=sum*10+t%10;
            t/=10;
        }
        if(check(i)&&check(sum)){
            cnt++;
            if(cnt==1) cout<<i;
            else cout<<','<<i;
        } 
    }
    if(cnt==0) cout<<"No";
    return 0;
}