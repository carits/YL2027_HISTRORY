#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
int const N=1e5+5;
int cha[N],sum[N];
int main(){
    cin>> n >> m;
    for(int i=1;i<=m;i++){
        int l,r;
        cin>> l >> r;
        cha[l]++,cha[r+1]--;
    }
    for(int i=1;i<=n;i++)sum[i]=sum[i-1]+cha[i];
    for(int i=1;i<=n;i++)ans+=bool(sum[i]);
    cout<< n-ans+1;
    return 0;
}