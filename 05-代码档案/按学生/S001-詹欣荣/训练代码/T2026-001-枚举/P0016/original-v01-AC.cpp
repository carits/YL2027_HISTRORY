#include<bits/stdc++.h>
using namespace std;
int cnt;
int main(){
    int n;
    cin>>n;
    for(int i=100;i<=999;i++){
        int num=i/100;
        num+=i%10;
        num+=(i%100-i%10)/10;
        if(num==n){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}