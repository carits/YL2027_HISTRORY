#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n;
int const N=5e5+5;
int a[N];
void slove(){
    int mn1=2e9,mn2=2e9,ans=0;
    cin>> n;
    for(int i=1,x;i<=n;i++){
        cin>> x;
        for(int j=1;j<=x;j++)cin>> a[j];
        sort(a+1,a+x+1);
        mn1=min(mn1,a[1]);
        mn2=min(mn2,a[2]);
        ans+=a[2];
    }
    cout<< ans-mn2+mn1 << "\n";
}
signed main(){
    cin>> t;
    while(t--)slove();
	return 0;
}