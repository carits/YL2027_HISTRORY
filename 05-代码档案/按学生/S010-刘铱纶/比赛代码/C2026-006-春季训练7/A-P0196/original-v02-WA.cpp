#include<bits/stdc++.h>

using namespace std;

int t, n;

int main()
{
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        
        int cnt = 0;
        
        for(int x = 1; x <= n; x++)
        {
            for(int i = cnt + n; i >= cnt + 1; i--)
            {
                cout << i << " ";
            }
            
            cnt++;
            cout << "\n";
        } 
    }
    return 0;
}