#include <bits/stdc++.h>
using namespace std;
int calc(string s){
    int r = 1;
    for(char c: s) r = r * (c - 'A' + 1) % 47;
    return r;
}
int main(){
    string a, b;
    cin >> a >> b;
    cout << (calc(a) == calc(b) ? "GO" : "STAY") << "\n";
    return 0;
}
