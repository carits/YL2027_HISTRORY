#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=1e5+5;
int a[N];
int main(){
    cin>> t;
    while(t--){
        cin>> n;
        for(int i=1;i<=n;i++)cin>> a[i];
        sort(a+1,a+n+1);
        cout<< max(a[1],a[2]-a[1]) << "\n";
    }
    return 0;
}