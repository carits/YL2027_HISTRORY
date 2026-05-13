#include<bits/stdc++.h>

using namespace std;

int t;//
char a[5][5];   

int main()
{
    cin >> t;
    while(t--)
    {
        for(int i = 1; i <= 3; i++)
        {
            for(int j = 1; j <= 3; j++)
            {
                cin >> a[i][j];
            }
        }
        
        bool v = 0;
        for(int i = 1; i <= 3; i++)
        {
            if(a[i][1] == a[i][2]  && a[i][2] == a[i][3] && a[i][1] != '.')
            {
                cout << a[i][1] << "\n";
                v = 1;
                break;
            }
            
            if(v == 0 && a[1][i] == a[2][i] && a[2][i] == a[3][i] && a[3][i] != '.')
            {
                cout << a[1][i] << "\n";
                v = 1;  
                break;
            }
        }
        
        if(v == 0 && a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] != '.')
        {
            cout << a[1][1] << "\n";
            v = 1;
        }
        
        if(v == 0 && a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[3][1] != '.')
        {
            cout << a[1][3] << "\n";
            v = 1;
        }
        
        if(v == 0)
        {
            cout << "DRAW" << "\n";
        }
    }
    return 0;
}