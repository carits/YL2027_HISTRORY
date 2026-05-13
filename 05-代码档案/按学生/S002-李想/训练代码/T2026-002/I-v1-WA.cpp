#include<bits/stdc++.h>
using namespace std;
#define int long long

int t;
string s;
signed main(){
    cin>> t;
    while(t--){
        cin>> s;
        string p="";
        int x=0;
        for(int i=1;i<=150;i++){
            p+="Yes";
            x=p.find(s);
            if(x!=-1){
                cout<< "YES";
                break;
            }
        }
        if(x==-1)cout<< "NO";
        cout<< "\n";
    }
	return 0;
}