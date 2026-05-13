#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=1e5+5;
int a[N];
void slove(){
    cin>> n;
    for(int i=1;i<=n;i++)cin>> a[i];
    int ct[N]={};
    for(int i=1;i<=n;i++){
        ct[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(a[i]!=ct[a[i]]){
            cout<< -1 << "\n";
            return;
        }
    }
    for(int i=1;i<=n;i++)cout<< a[i] << " ";
    cout<< "\n";
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}