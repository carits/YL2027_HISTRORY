#include<bits/stdc++.h>
using namespace std;

int n,ans;
int const N=3e5+5;
int a[N]; 
int main(){
    cin>> n;
    for(int i=1;i<=n;i++)cin>> a[i];
    for(int i=1;i<=n;i++){
//        if(i!=1)i--;
        int l=1;
        while(2*a[i]>=a[i+1]&&i<n)i++,l++;
//        if(l>=2)i--,l--;
//        i--;
        //cout<< i << " " << l << "\n";
        ans=max(ans,l);
    }
    cout<< ans;
    return 0;
}