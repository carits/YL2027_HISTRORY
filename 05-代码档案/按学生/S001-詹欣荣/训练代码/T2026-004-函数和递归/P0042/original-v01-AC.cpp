#include<bits/stdc++.h>
using namespace std;
int a[100005];
int cnt;
long long y(int x){
    long long sum=3;
    for(int i=1;i<=x;i++){
        sum=(sum-1)*2;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
         cin>>a[i];
         cout<<y(a[i])<<endl;
    }
    return 0;
}