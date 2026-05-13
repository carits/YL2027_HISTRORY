#include<bits/stdc++.h>
using namespace std;

int t,s,k,m;
void slove(){
    cin>> s >> k >> m;
    if(s==k)cout<< s-(m%s);
    else if(k>s)cout<< max(0,s-(m%k));
    else{
        if((m/k)%2==0)cout<< s-(m%k);
        else cout<< k-(m%k);
    }
    cout<< "\n";
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}