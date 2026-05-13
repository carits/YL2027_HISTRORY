#include<bits/stdc++.h>
using namespace std;
#define int long long

int t;
int const N=10,n=8;
string a[N];
signed main(){
    cin>> t;
    while(t--){
        char c=' ';
        cin>> c;
        c='B';
        for(int i=1;i<=n;i++){
            string s;
            cin>> s;
            if(s=="RRRRRRRR")c='R';
        }
        cout<< c << "\n";
    }
	return 0;
}