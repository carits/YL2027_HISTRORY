#include <bits/stdc++.h>
using namespace std;

string s;
int solve(int l,int r,char ch){
    if(l==r) return s[l]!=ch;
    int m=(l+r)/2;
    int left_bad=0,right_bad=0;
    for(int i=l;i<=m;i++) if(s[i]!=ch) left_bad++;
    for(int i=m+1;i<=r;i++) if(s[i]!=ch) right_bad++;
    return min(left_bad + solve(m+1,r,ch+1), right_bad + solve(l,m,ch+1));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--){
        int n; cin >> n >> s;
        cout << solve(0,n-1,'a') << '\n';
    }
    return 0;
}
