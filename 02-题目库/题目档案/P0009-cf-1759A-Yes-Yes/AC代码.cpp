#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    string base;
    for(int i = 0; i < 20; i++) base += "Yes";
    while(T--){
        string s;
        cin >> s;
        cout << (base.find(s) != string::npos ? "YES" : "NO") << "\n";
    }
    return 0;
}
