#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int m;
        cin>>m;
        int a[m+1];
        int maxn=0;
        for(int j=1;j<=m;j++){
            cin>>a[j];
            maxn=max(maxn,a[j]);
        }
        int cnt=0;
        for(int j=1;j<=m;j++){
            if(maxn==a[j]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}