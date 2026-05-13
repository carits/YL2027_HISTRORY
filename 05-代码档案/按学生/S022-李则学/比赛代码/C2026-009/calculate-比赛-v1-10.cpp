#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
    freopen("calculate.in","r",stdin);
    freopen("calculate.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int a,b;
    cin>>a>>b;
    cout<<a*b;
    return 0;
}
