#include<bits/stdc++.h>
using namespace std;
int t, n;
int js[50];
string s;
void so(){
    memset(js, 0, sizeof(js));
    bool dx = 0;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i++) js[abs(s[i] - 'a' + 1)]++;
    for(int i = 1; i <n - 1; i++){ 
        if(js[abs(s[i] - 'a' + 1)] > 1){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main(){
    cin >> t;
    while(t--) so();
    return 0;
}