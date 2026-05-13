#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int a = 1, b = 1;
int main(){
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++) a *= int(s1[i] - 'A');
    for (int i = 0; i < s2.size(); i++) b *= int(s2[i] - 'A');
    if (a % 47 != b % 47) cout << "GO";
    else cout << "STAY";
    return 0;
}