#include<bits/stdc++.h>
using namespace std;
int a[100005];
int cnt;
bool zs(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    int z=0;
    while(x!=0){
        z=z*10+x%10;
        x/=10;
    }
    for(int i=2;i*i<=z;i++){
        if(z%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int l,r;
    cin>>l>>r;
    int cnt=0;
    for(int i=l;i<=r;i++){
        if(zs(i)){
            cnt++;
            a[cnt]=i;
        }
    }
    cout<<a[1];
    for(int i=2;i<=cnt;i++){
        cout<<","<<a[i];
    }
    return 0;
}