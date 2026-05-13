#include <bits/stdc++.h>
using namespace std;
bool check(string a, string b)
{
    if (a.size() == 1)
        return a == b;
    string a1(a, 0, a.size() / 2);
    string a2(a, a.size() / 2, a.size() / 2);
    string b1(b, 0, b.size() / 2);
    string b2(b, b.size() / 2, b.size() / 2);
    return max((check(a1, b1) && check(a2, b2)), (check(a1, b2) && check(a2, b1)));
}
int main()
{
    string a, b;
    cin >> a >> b;
    if (a == b || check(a, b))
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}