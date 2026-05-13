#include<bits/stdc++.h>
using namespace std;
 int t,n;
string s;
map<char,pair<int,int>>mp;
int main(){
    cin>> t;
    mp['L']={0,-1};
    mp['R']={0,1};
    mp['U']={1,0};
    mp['D']={-1,0};
    while(t--){
        cin>> n >> s;
        int x=0,y=0;
        bool p=0;
        for(char c:s){
            // cout<< x << " " << y << " ";
            x+=mp[c].second,y+=mp[c].first;
            if(x==y&&y==1)p=1;
        }
        cout<< ((p)?"YES":"NO") << "\n";
    }
    return 0;
}