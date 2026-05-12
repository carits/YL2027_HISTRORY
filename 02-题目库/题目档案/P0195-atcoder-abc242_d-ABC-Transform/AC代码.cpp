#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S; cin >> S;
    int Q; cin >> Q;
    while(Q--){
        long long t,k;
        cin >> t >> k;
        long long add=0;
        while(t>0 && k>1){
            if(k%2==1) add+=1;
            else add+=2;
            k=(k+1)/2;
            t--;
        }
        add += t%3;
        int base=S[k-1]-'A';
        cout << char('A'+(base+add)%3) << '\n';
    }
    return 0;
}
