#include<bits/stdc++.h>
using namespace std;
int a[10005][10005];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x,y,c,k;
        cin>>x>>y>>c>>k;
        for(int j=x;j<=x+c-1;j++){
            for(int k=y;k<=y+k-1;k++){
                a[j][k]=i;
            }
        }
    }
    int x,y;
    cin>>x>>y;
    cout<<a[x][y];
    return 0;
}             
