#include<bits/stdc++.h>
using namespace std;

int n,ans;
int main(){
    cin>> n;
    for(int i=100;i<=999;i++)ans+=(i%10+i/10%10+i/100==n);
    cout<< ans;
    return 0;
}