#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("calculate.in","r",stdin);
    freopen("calculate.out","w",stdout);
    long long n,a[100005],b,c;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cin>>b>>c;
    cout<<b*c;
    return 0;
}
