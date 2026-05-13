#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=2e5+5;
int a[N];
void slove(){
    cin>> n;
    for(int i=1;i<=n;i++)cin>> a[i];
    if(n==1){
        cout<< "0\n";
        return;
    }
    cout<< n-1 << "\n";
    cout<< 1 << " " << n << "\n";
    int nw=a[1];
    if((a[1]+a[n])%2==0){
        nw=a[n];
    }
    for(int i=2;i<n;i++){
        if((a[i]+nw)%2!=0)cout<< 1 << " " << i;
        else cout<< i << " " << n;
        cout<< "\n";
    }
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}