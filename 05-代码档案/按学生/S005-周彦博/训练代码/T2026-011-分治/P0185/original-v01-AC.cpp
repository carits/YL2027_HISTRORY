#include <bits/stdc++.h>
using namespace std;
int a, b, p;
long long ksm(long long a, int b, int p){
    long long res = 1;
    while(b){
        if (b & 1) res = res * a % p;
        a *= a;
        a %= p;
        b /= 2;
    }
    return res;
}
int main(){
    cin >> a >> b >> p;
    cout  << a << '^' << b << " mod " << p << '='<< ksm(a, b, p);
    return 0;
}