#include <bits/stdc++.h>
using namespace std;

string s;
int ans;
bool vis[30];
int main()
{
    cin >> s;
    for(int i = 0; i < s.size(); i ++)
        if(vis[s[i] - 'a' + 1] == 0)
        {
            ans ++;
            vis[s[i] - 'a' + 1] = 1;
        }
    if(ans % 2 == 0)
        cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}