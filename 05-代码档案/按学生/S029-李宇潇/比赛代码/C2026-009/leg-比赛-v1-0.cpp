#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    
    int n,a,b;
    cin >> n;
    
    for(int i = 1,x;i <= n;i++){
        cin >> x;
    }
    cin >> a >> b;
    
    cout << a * b;
    
    return 0;
}
