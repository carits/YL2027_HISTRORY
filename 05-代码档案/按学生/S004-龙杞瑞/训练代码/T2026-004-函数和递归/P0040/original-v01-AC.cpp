#include<bits/stdc++.h>
#define int long long
using namespace std;
int x,y,cnt,a[100005];
int check(int x){
    if(x%4==0&&x%100!=0||x%400==0) return 1;
    return 0; 
} 
signed main(){
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        if(check(i)){
            cnt++;
            a[cnt]=i;
        }
    }
    cout<<cnt<<endl;
    for(int i=1;i<=cnt;i++) cout<<a[i]<<" ";
    return 0;
}