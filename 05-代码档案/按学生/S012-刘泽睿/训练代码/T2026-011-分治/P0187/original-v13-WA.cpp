#include<bits/stdc++.h>
using namespace std;
int a,b[500005],c[500005],d;
void m(int l,int r){
    if(l==r)return;
    int mid=(l+r)/2;
    m(l,mid);
    m(mid+1,r);
    int i=l,j=mid+1,k=1;
    while(i<=mid and j<=r){
        if(b[i]<=b[j]){
            c[k++]=b[i++];
        }else{
            d+=mid-i+1;
            c[k++]=b[j++];
        }
    }while(i<=mid){
        c[k++]=b[i++];
    }while(j<=r)c[k++]=b[j++];
    for(int i=l,j=1;i<=r;i++,j++)b[i]=c[j];
}
int main(){
    cin>>a;
    for(int i=1;i<=a;i++)cin>>b[i];
    cout<<d;
}