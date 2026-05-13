#include<bits/stdc++.h>
using namespace std;

int t,n,s,x;
int a[15];
int main(){
    cin>> t;
    while(t--){
        cin>> n >> s >> x;
        int ans=0;
        for(int i=1;i<=n;i++)cin>> a[i];
        for(int i=1;i<=n;i++)ans+=a[i];
        ans=s-ans;
//        cout<< ans << " ";
        if(ans<0||ans%x!=0)cout<< "NO";
        else cout<< "YES";
        cout<< "\n";
    }
    return 0;
} 