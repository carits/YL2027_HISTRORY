#include<bits/stdc++.h>
using namespace std;
int n,a[200005],maxn,sum;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(i==1||a[i]<=a[i-1]*2){
            sum++;
        }else{
            maxn=max(maxn,sum);
            sum=1;
        }
    }
    maxn=max(maxn,sum);
    cout<<maxn;
    return 0;
}