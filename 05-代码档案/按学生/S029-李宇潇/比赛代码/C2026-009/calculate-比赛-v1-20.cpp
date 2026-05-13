#include <iostream>
#include <stdio.h>
using namespace std;

#define int long long

signed main(){
    freopen("calculate.in","r",stdin);
    freopen("calculate.out","w",stdout);
    
    int n,a,b;
    cin >> n;
    
    for(int i = 1,x;i <= n;i++){
        cin >> x;
    }
    cin >> a >> b;
    
    cout << a * b;
    
    return 0;
}
