#include<bits/stdc++.h>
using namespace std;
int t, n;
string s, st;
int main(){
    cin >> t;
  while(t--){
        cin >> n >> s >> st;
        int o = 1, sum = 0;
        for(int i = 0; i < n; i += o){
            o = 1;
            if(s[i] == st[i]){
                if(s[i] == '1'){
                    if(s[i + 1] == st[i + 1] && s[i + 1] == '0'){
                        o = 2;
                        sum += 2;
                    }
                }
                else{
                    if(s[i + 1] == st[i + 1] && s[i + 1] == '1'){
                        o = 2;
                        sum += 2;
                    }
                    else sum++;
                }
            }
            else sum += 2;
        }
  cout << sum << "\n";
    }
    return 0;
}