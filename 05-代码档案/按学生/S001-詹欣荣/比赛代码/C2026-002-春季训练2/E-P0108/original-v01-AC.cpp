#include<bits/stdc++.h>
using namespace std;
set<long long>s;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=10000;i++){
        long long num=1;
        num+=i;
        int k=i*i;
        num+=k;
        s.insert(num);
        while(num<=1000000){
            k*=i;
            num+=k;
            s.insert(num);
        }
    }
    while(n--){
        int m;
        cin>>m;
        auto pos=s.lower_bound(m);
        if(pos!=s.end()){
            if(*pos==m){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}