#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int na = 1, nb = 1;
    for (int i = 0; i < a.size(); i++)
        na *= a[i] - 'A' + 1;
    for (int i = 0; i < b.size(); i++)
        nb *= b[i] - 'A' + 1;
    if (na % 47 == nb % 47)
        cout << "GO";
    else
        cout << "STAY";
    return 0;
}