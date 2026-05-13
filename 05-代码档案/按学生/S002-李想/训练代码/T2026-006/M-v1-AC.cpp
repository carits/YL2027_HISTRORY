#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=1e5+5;
char ch[N];
void slove(){
    int ans=0;
    cin>> n;
    for(int i=1;i<=n;i++)cin>> ch[i];
    for(int i=1;i<=n;i++){
        if(ch[i]=='0')ans++;
    }
    cout<< ans << "\n";
    for(int i=1;i<=n;i++){
        if(ch[i]=='0')cout<< i << " ";
    }
    cout<< "\n";
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}