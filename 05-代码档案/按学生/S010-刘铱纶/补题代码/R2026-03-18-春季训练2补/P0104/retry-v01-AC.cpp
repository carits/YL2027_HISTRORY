#include<bits/stdc++.h>

using namespace std;

int t, n;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        
        int a, b, cnt = 0;
        while(n--)
        {
            cin >> a >> b;
            if(a > b)
            {
                cnt++;
            }
        }//
        
        cout << cnt << "\n";
    }
    return 0;
}