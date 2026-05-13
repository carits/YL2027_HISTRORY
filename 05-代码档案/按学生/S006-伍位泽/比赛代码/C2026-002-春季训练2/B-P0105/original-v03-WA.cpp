#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    char a , b , c , d , e , f , g , h , i;
    while (t--)
    {
        cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
        if ((a==b&&b==c&&a!='.')||(a==d&&d==g&&a!='.')||(a==e&&e==i&&a!='.'))
        {
            cout << a << "\n";
        }
        else if (b==e&&e==h&&b!='.')
        {
            cout << b << "\n";
        }
        else if ((c==f&&f==i&&c!='.')||(c==d&&d==g&&c!='.'))
        {
            cout << c << "\n";
        }
        else if (d==e&&e==f&&d!='.')
        {
            cout << d << "\n";
        }
        else if (g==h&&h==i&&g!='.')
        {
            cout << g << "\n";
        }
        else
        {
            cout << "DRAW\n";
        }
    }
    return 0;
}