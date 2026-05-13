#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

map<int,bool> prime;

int main(){
    freopen("friends.in","r",stdin);
    freopen("friends.out","w",stdout);
    
    int n;
    cin >> n;
    
    for(int i = n;i >= 1;i--){
        if(n % i == 0){
            prime.insert({i,true});
        }
    }
    
    for(int i = 1;i <= n;i++){
        if(prime[i]){
            cout << n / i;
        } else{
            cout << n / (*prime.upper_bound(i)).first;
        }
        cout << " ";
    }
    
    return 0;
}
