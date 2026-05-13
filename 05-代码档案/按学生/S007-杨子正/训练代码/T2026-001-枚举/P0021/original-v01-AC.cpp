#include <bits/stdc++.h>
using namespace std;
int a[128];
int main() 
{
    string s;
    cin >> s;
    int tot = 0;
    for (auto c : s)
    {
        if (a[c] == 0)
            tot++, a[c]++;
    } 
    if (tot % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}