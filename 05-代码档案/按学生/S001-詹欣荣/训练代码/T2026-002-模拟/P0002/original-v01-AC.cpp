#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
    int n;
    for(int i=1;i<=10;i++){
        cin>>a[i];
    }
    cin>>n;
    int cnt=0;
    n+=30;
    for(int i=1;i<=10;i++){
        if(n>=a[i]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}