#include<bits/stdc++.h>
using namespace std;

int n,ans;
int main(){
    cin>> n;
    for(int i=1;i<=n;i++){
        int a,b,c;
        cin>> a >> b >> c;
        ans+=((a+b+c)>=2);
    }
    cout<< ans;
    return 0;
}