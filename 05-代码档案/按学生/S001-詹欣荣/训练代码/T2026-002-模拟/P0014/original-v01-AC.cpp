#include<bits/stdc++.h>
using namespace std;
queue<int>q;
int a[100005];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        for(int j=i;j<=n;j+=i){
            a[j]++;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]%2==1){
            cout<<i<<" ";
        }
    }
    return 0;
}