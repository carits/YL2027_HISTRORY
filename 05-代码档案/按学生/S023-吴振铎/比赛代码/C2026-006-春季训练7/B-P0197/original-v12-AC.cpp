#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    x=t;
    while(t--){
        int n,a[200005];
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=2;i<=n;i++)cout<<a[i]<<" ";
        cout<<a[1];
        cout<<"\n";
    }
    return 0;
}