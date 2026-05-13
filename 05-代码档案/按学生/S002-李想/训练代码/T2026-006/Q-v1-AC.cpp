#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,a,b;
void slove(){
    cin>> a >> b;
    if(a%2==0&&b%2==1){
        cout<< -1;
    }else if(a%2==0&&b%2==0){
        cout<< a*(b/2)+2;
    }else if(a%2==1&&b%2==1){
        cout<< (a*b)+1;
    }else{
        if(b%4==0){
            cout<< a*(b/2)+2;
        }else{
            cout<< -1;
        }
    }
    cout<< "\n";
}
signed main(){
    cin>> t;
    while(t--)slove();
    return 0;
}