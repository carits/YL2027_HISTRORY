#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin >> t;
    while(t--){
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        if (s1[0] == 'X' && s2[1] == 'X' && s3[2] == 'X'){
            cout << "X\n";
            continue;
        }
        if (s1[0] == 'O' && s2[1] == 'O' && s3[2] == 'O'){
            cout << "O\n";
            continue;
        }
        if (s1[0] == '+' && s2[1] == '+' && s3[2] == '+'){
            cout << "+\n";
            continue;
        }
        if (s1[2] == 'X' && s2[1] == 'X' && s3[0] == 'X'){
            cout << "X\n";
            continue;
        }
        if (s1[2] == 'O' && s2[1] == 'O' && s3[0] == 'O'){
            cout << "O\n";
            continue;
        }
        if (s1[2] == '+' && s2[1] == '+' && s3[0] == '+'){
            cout << "+\n";
            continue;
        }
        if (s1[0] == 'X' && s2[0] == 'X' && s3[0] == 'X'){
            cout << "X\n";
            continue;
        }
        if (s1[0] == 'O' && s2[0] == 'O' && s3[0] == 'O'){
            cout << "O\n";
            continue;
        }
        if (s1[0] == '+' && s2[0] == '+' && s3[0] == '+'){
            cout << "+\n";
            continue;
        }
        if (s1[1] == 'X' && s2[1] == 'X' && s3[1] == 'X'){
            cout << "X\n";
            continue;
        }
        if (s1[1] == 'O' && s2[1] == 'O' && s3[1] == 'O'){
            cout << "O\n";
            continue;
        }
        if (s1[1] == '+' && s2[1] == '+' && s3[1] == '+'){
            cout << "+\n";
            continue;
        }
        if (s1[2] == 'X' && s2[2] == 'X' && s3[2] == 'X'){
            cout << "X\n";
            continue;
        }
        if (s1[2] == 'O' && s2[2] == 'O' && s3[2] == 'O'){
            cout << "O\n";
            continue;
        }
        if (s1[2] == '+' && s2[2] == '+' && s3[2] == '+'){
            cout << "+\n";
            continue;
        }
        if (s1[0] == 'X' && s1[1] == 'X' && s1[2] == 'X'){
            cout << "X\n";
            continue;
        }
        if (s1[0] == 'O' && s1[1] == 'O' && s1[2] == 'O'){
            cout << "O\n";
            continue;
        }
        if (s1[0] == '+' && s1[1] == '+' && s1[2] == '+'){
            cout << "+\n";
            continue;
        }
        if (s2[0] == 'X' && s2[1] == 'X' && s2[2] == 'X'){
            cout << "X\n";
            continue;
        }
        if (s2[0] == 'O' && s2[1] == 'O' && s2[2] == 'O'){
            cout << "O\n";
            continue;
        }
        if (s2[0] == '+' && s2[1] == '+' && s2[2] == '+'){
            cout << "+\n";
            continue;
        }
        if (s3[0] == 'X' && s3[1] == 'X' && s3[2] == 'X'){
            cout << "X\n";
            continue;
        }
        if (s3[0] == 'O' && s3[1] == 'O' && s3[2] == 'O'){
            cout << "O\n";
            continue;
        }
        if (s3[0] == '+' && s3[1] == '+' && s3[2] == '+'){
            cout << "+\n";
            continue;
        }
        cout << "DRAW\n";
    }
    return 0;
}