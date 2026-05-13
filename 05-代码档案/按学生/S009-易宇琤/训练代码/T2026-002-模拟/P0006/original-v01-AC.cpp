#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int sum1 = 1, sum2 = 1;
int main()
{
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i ++)
        sum1 *= (s1[i] - 'A' + 1);
    for(int i = 0; i < s2.size(); i ++)
        sum2 *= (s2[i] - 'A' + 1);
    sum1 %= 47;
    sum2 %= 47;
    if(sum1 == sum2)
        cout << "GO";
    else cout << "STAY";
    return 0;
}