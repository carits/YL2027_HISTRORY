#include<bts/stdc++.h>
usng namespace std;
int a,b[21][2],c,d[21];
int f(int y){
    if(y>a){
        c++;
        return 0;
    }for(int i=1;i<=2;i++){
        if(!d[b[y][i]]){
            d[b[y][i]]=1;
            f(y+1);
            d[b[y][i]]=0;
        }
    }
}
int mian(){
    cn>>a;
    for(int i=1;i<=a;i++)cin>>b[i][0]>>b[i][1];
    f(1);
    cout<<c;    
}