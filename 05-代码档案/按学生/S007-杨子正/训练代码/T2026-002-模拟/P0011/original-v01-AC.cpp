#include <bits/stdc++.h>
using namespace std;
string s[10];
void work()
{
    bool flag = false;
    for (int i = 1; i <= 8; i ++)
    {
        cin >> s[i];
        if (s[i] == "RRRRRRRR")
            flag = true;
    }
    if (flag == true)
        cout << "R\n";
    else
        cout << "B\n";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        work();
    return 0;
}