#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,t,mx;
int const N=1e5+5;
int a[N];
signed main(){
    cin>> n >> t;
    for(int i=1;i<=n;i++)cin>> a[i];
    for(int i=1,j=n;i<j;){
        if(a[i]+a[j]>t){
            j--;
        }else{
            mx=max(mx,a[i]+a[j]);
            i++;
        }
    }
    cout<< mx;
    return 0;
}