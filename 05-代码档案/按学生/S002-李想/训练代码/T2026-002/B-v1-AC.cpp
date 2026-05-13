#include<bits/stdc++.h>
using namespace std;

int n;
int a[15];
int main(){
    for(int i=1;i<=10;i++)cin>> a[i];
    cin>> n;
    for(int i=1;i<=10;i++){
        a[0]+=(a[i]<=n+30);
    }
    cout<< a[0];
    return 0;
}