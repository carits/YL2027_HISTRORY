#include<bits/stdc++.h>
using namespace std;

int n,m;
int const N=1e6+5;
int a[N];
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin>> n >> m;
    for(int i=1;i<=n;i++)cin>> a[i];
    for(int i=1;i<=m;i++){
        int x;
        cin>> x;
        int num=lower_bound(a+1,a+n+1,x)-a;
        if(a[num]==x)cout<< num;
        else cout<< -1;
        cout<< " ";
    }
    return 0;
}