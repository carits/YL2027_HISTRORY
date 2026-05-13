#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=2e5+5;
int a[N];
void slove(){
    int tot=0;
    cin>> n;
    for(int i=1;i<=n;i++)cin>> a[i];
    int ct[N]={},ans[N]={};
    for(int i=1;i<=n;i++){
        ct[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(ct[a[i]]&&ct[a[i]]%a[i]!=0){
            cout<< -1 << "\n";
            return;
        }
    }
    for(int i=1;i<=n;i++){
        if(ct[a[i]]%a[i]==0)ans[a[i]]=++tot;
        ct[a[i]]--;
        cout<< ans[a[i]] << " ";
    }
    cout<< "\n";
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}