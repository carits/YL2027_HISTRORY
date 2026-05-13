#include<bits/stdc++.h>
using namespace std;
#define int long long
 int n,m,x;
int const N=2e5+5;
int s[N];
signed main(){
 cin>> n >> m;
    for(int i=1;i<=n;i++){
        cin>> x;
        s[i]=s[i-1]+x;
    }
    for(int i=1;i<=m;i++){
        cin>> x;
        int o=lower_bound(s+1,s+n+1,x)-s;
        cout<< o << " " << x-s[o-1] << "\n";
    }
    return 0;
}