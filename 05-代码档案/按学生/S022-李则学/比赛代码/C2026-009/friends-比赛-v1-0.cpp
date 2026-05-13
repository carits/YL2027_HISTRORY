#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
    freopen("friends.in","r",stdin);
    freopen("friends.out","w",stdout);
    int n;
    long long sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum<<' ';
    for(int i=2;i<=n;i++){
        cout<<sum/i<<' ';
    }
    return 0;
}
