#include <bits/stdc++.h>
using namespace std;
string s;
int a[30], cnt;
int main(){
    cin >> s;
    for (int i = 0; i < s.size(); i++) a[s[i] - 'a']++;
    for (int i = 0; i <= 26; i++) if(a[i]) cnt++;
    if (cnt & 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    return 0;
}