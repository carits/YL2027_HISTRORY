#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[15]; 
signed main(){
    cin>>n;
    for(int i=n+1;i<=9999;i++){
        memset(a,0,sizeof(a));
        int l1=i%10,l2=i/10%10,l3=i/10/10%10,l4=i/10/10/10%10;
        a[l1]++; 
        a[l2]++;
        a[l3]++;
        a[l4]++;
        if(a[l1]==1&&a[l2]==1&&a[l3]==1&&a[l4]==1){
            cout<<i;
            return 0;
        }
    }
    return 0;
}