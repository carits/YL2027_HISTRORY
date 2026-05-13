#include<bits/stdc++.h>
using namespace std;
int a,b[21][2],c,d[21];
void f(int y){
    if(y>a){
        c++;
        return;
    }for(int i=0;i<=1;i++){
        if(!d[b[y][i]]){
            d[b[y][i]]=1;
            f(y+1);
            d[b[y][i]]=0;
        }
    }return;
}
int main(){
    cin>>a;
    for(int i=1;i<=a;i++)cin>>b[i][0]>>b[i][1];
    f(1);
    cout<<c;
    return 0;
}