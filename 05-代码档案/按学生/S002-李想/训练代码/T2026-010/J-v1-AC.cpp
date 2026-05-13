#include<iostream>
using namespace std;

int n,m,ans=-1;
int const N=1e5+5;
struct node{
    int w,h;
}a[N];
bool check(int x){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(a[i].w/x)*(a[i].h/x);
    }
    if(sum>=m)ans=x;
    return sum>=m;
}
int main(){
    cin>> n >> m;
    for(int i=1;i<=n;i++)cin>> a[i].w >> a[i].h;
    int l=1,r=1e9;
    while(l<=r){
        int mid=(l+r)>>1;
        if(check(mid))l=mid+1;
        else r=mid-1;
    }
    cout<< ans;
    return 0;
}