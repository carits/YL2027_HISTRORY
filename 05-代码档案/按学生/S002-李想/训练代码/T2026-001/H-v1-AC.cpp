#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;
int cnt[15];
signed main(){
    cin>> n;
    for(int i=n+1;i<=9999;i++){
        int x=i,ans=0;
        while(x){
            cnt[x%10]++;
            x/=10;
        }
        for(int i=0;i<=9;i++){
            ans+=bool(cnt[i]);
            cnt[i]=0;
        }
        if(ans==4){
            cout<< i;
            break;
        }
    }
    return 0;
}