#include <bits/stdc++.h>
using namespace std;
bool check(int x)
{
    vector <int> cnt(128);
    string s;
    s = to_string(x);
    for (auto c : s)
    {
        cnt[c]++;
        if (cnt[c] > 1)
            return false; 
    } 
    return true;
}
int main() 
{
    int y;
    cin >> y;
    for (int i = y + 1; i <= 10000; i++)
        if (check(i))
        {
            cout << i;
            return 0;
        }
    return 0;
}