#include<bits/stdc++.h>
using namespace std;
int n,a[200005],maxn=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        int sum=0;
        int l=i;
        for(int j=i;j<=n;j++){
            if(a[j]<a[l]*2){
                sum++;
                l=j;
            }
        }
        maxn=max(maxn,sum);
    }
    cout<<maxn;
    return 0;
}