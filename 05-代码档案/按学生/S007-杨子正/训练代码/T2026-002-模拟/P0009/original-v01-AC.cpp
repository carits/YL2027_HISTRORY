#include <bits/stdc++.h>
using namespace std;
const string inf = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int pos = inf.find(s);
        if (pos < 0 || pos >= 60)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}