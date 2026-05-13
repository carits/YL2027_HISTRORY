#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("skill.in","r",stdin);
    freopen("skill.out","w",stdout);
    int n,m;
    cin>>n>>m;
    if(n==1){
        if(m<=4)cout<<"20";
        else cout<<"100";
    }
    else if(n==2){
        if(m<=2)cout<<"20";
        else if(m==3)cout<<"10";
        else if(m==4)cout<<"30";
        else cout<<"100";
    }
    else if(n==3){
        if(m<=2)cout<<"25";
        else if(m==3)cout<<"30";
        else cout<<"100";;;;;;;;;;;;;;;;;;;;;;;;;
    }
    else{
        if(m<=3||m==6)cout<<"15";
        else if(m<=5&&m>=4)cout<<"10";
        else cout<<"100";
    }
    return 0;
}
