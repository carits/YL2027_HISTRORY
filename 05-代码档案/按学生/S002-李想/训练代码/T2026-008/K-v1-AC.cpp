#include<bits/stdc++.h>
using namespace std;

int n,maxn;
bool check(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)return 0;
    }
    return 1;
}
int main(){
    cin>> n;
    for(int i=n;i>=1;i--){
        if(check(i)){
            maxn=i;
            n-=i;
            break;
        }
    }
    if(n==0){
        cout<< "1\n";
        cout<< maxn;
        return 0;
    }else if(n<=2){
        cout<< "2\n";
        cout<< 2 << " " << maxn;
        return 0;
    }
    for(int i=2;i<n;i++){
        if(check(i)&&check(n-i)){
            cout<< "3\n";
            cout<< maxn << " " << i << " " << n-i;
            return 0;
        }
    }
    return 0;
}