#include<bits/stdc++.h>
using namespace std;

int n,ax=-1,ay;
int const N=1e4+5;
int a[N],b[N],c[N],d[N];
int main(){
    cin>> n;
    for(int i=1;i<=n;i++)cin>> a[i] >> b[i] >> c[i] >> d[i];
    for(int i=1;i<=n;i++){
        int x=c[i],y=d[i];
        c[i]=a[i]+x,d[i]=b[i]+y;
    }
    int x,y;
    cin>> x >> y;
    for(int i=1;i<=n;i++){
        if(a[i]<=x&&b[i]<=y&&c[i]>=x&&d[i]>=y)ax=i;
    }
    cout<< ax;
    return 0;
}
/*
2 1 2 2
**
**

1 1 2 2
*/